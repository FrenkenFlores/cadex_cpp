#include <iostream>
#include <vector>
#include <cmath>
#include "Point.h"
#include "Circle.h"
#include "Curve.h"
#include "Ellipse.h"
#include "Helix.h"

enum available_curves {
    CIRCLE,
    ELLIPSE,
    HELIX
};


int main() {
    Ellipse e(1.0, 1.0);
    std::vector<Curve *> container;
    
    srand(42);
    for (int i = 0; i < 10; i++) {
        // Initialize random curves with random radiuses.
        const int radius = rand() % 100;
        const int fixedPointA = radius + 10;
        const int fixedPointB = radius - 20;
        const int step = rand() % 10;
        switch (rand() % 3) {
            case available_curves::CIRCLE:
                container.push_back(new Circle(radius));
                std::cout << "Circle with radius " << radius << "." << std::endl;
                break;
            case available_curves::ELLIPSE:
                container.push_back(new Ellipse(fixedPointA, fixedPointB));
                std::cout << "Ecllipse with fixed points " << fixedPointA << ", " << fixedPointB << "." << std::endl;
                break;
            case available_curves::HELIX:
                container.push_back(new Helix(fixedPointA, fixedPointB));
                std::cout << "3D helix with radius " << radius << ", and step " << step << "." << std::endl;
                break;
        }

    }
    // Print coordinates of points and derivatives of all curves at t=PI/4.
    const double t = M_PI_4;
    std::cout << "Print coordinates of points and derivatives of all curves at t=" << t << std::endl;
    for (Curve *c: container) {
        std::cout << c->getPoint(t) << std::endl;
    }
    
    
    // Create a container that contains only circle curves from the general container.
    std::vector<Circle *> circlesContainer;
    for (Curve *c: container) {
        // Try to downcast the curve to the Circle class.
        Circle *circle = dynamic_cast<Circle *>(c);
        // If the curve is an object of Circle class, than append it to the container.
        if (circle)
            circlesContainer.push_back(circle);
    }
    
    // Check the size of the containers.
    std::cout << "Size: " << circlesContainer.size() << ", " << container.size() << std::endl;
    // Clean memory.
    for (Curve *c: container) {
        delete c;
    }
    return 0;
}

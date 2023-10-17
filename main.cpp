#include <iostream>
#include <vector>
//#include "./Header Files/Point.h"
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
    
    for (Curve *c: container) {
        delete c;
    }
    return 0;
}

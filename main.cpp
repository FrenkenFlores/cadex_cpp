#include <iostream>
#include <vector>
//#include "./Header Files/Point.h"
#include "Point.h"
#include "Circle.h"
#include "Curve.h"


enum available_curves {
    CIRCLE,
    ELLIPSE,
    HELIX
};


int main() {
    std::vector<Curve *> container;
    
    srand(42);
    for (int i = 0; i < 10; i++) {
        const int t = rand() % 100;
        switch (rand() % 3) {
            case CIRCLE:
                container.push_back(new Circle(t));
                std::cout << "Circle with parameter " << t << "." << std::endl;
                break;
            case ELLIPSE:
                container.push_back(new Circle(t));
                std::cout << "Ecllipse with parameter " << t << "." << std::endl;
                break;
            case HELIX:
                container.push_back(new Circle(t));
                std::cout << "3D helix with parameter " << t << "." << std::endl;
                break;
        }
    }
    
    for (Curve *c: container) {
        delete c;
    }
    return 0;
}

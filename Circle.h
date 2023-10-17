//
//  Circle.h
//  cadex_cpp
//
//  Created by FrenkenFlores on 17.10.2023.
//

#ifndef Circle_h
#define Circle_h
#include "Curve.h"
#include "Point.h"
#include <iostream>

// Inherit the Curve interface that define the methods for the curves.
class Circle : public Curve {
private:
    double radius;
    // Define a canonical structure.
    Circle(){}
    Circle(const Circle &c){}
    Circle &operator=(const Circle &c);
public:
    // Add the constructor that will initialize the radius value.
    Circle(const double r) : radius(r) {}
    // implement the getPoint method. t takes value in [0, 2 * pi]
    Point getPoint(const double t) const override{
        return {
            this->radius * cos(t), // The x coordinate value.
            this->radius * sin(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
    // Implement the getDerivative method.
    Point getDerivative(const double t) const override{
        return {
            this->radius * -sin(t), // The x coordinate value.
            this->radius * cos(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
    const double getRadius() const{
        return this->radius;
    }
    
    double getRadius() {
        return this->radius;
    }
};


bool operator<=(const Circle &c1, const Circle &c2) {
    return c1.getRadius() < c2.getRadius();
}

bool operator<=(Circle &c1, Circle &c2) {
    return c1.getRadius() < c2.getRadius();
}

#endif /* Circle_h */

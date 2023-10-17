//
//  Ellipse.h
//  cadex_cpp
//
//  Created by FrenkenFlores on 17.10.2023.
//

#ifndef Ellipse_h
#define Ellipse_h
#include "Point.h"
#include "Curve.h"

class Ellipse : public Curve {
private:
    // Define the fixed points of an Ellipse.
    double a;
    double b;
    // Set the cononical class structure.
    Ellipse(){}
    Ellipse(const Ellipse& e) {}
    Ellipse& operator=(const Ellipse& e);
public:
    // Add the constructor that initialize the ellipse fixed points.
    Ellipse(const double a, const double b): a(a), b(b) {}
    // Implmenet the getPoint method.
    Point getPoint(const double t) const override {
        return {
            a * cos(t), // The x coordinate value.
            b * sin(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
    // Implement the getDerivative method.
    Point getDerivative(const double t) const override {
        return {
            a * -sin(t), // The x coordinate value.
            b * cos(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
};

#endif /* Ellipse_h */

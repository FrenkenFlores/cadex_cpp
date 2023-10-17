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
    double a;
    double b;
    Ellipse(){}
    Ellipse(const Ellipse& e) {}
    Ellipse& operator=(const Ellipse& e);
public:
    Ellipse(double a, double b): a(a), b(b) {}
    Point getPoint(const double t) const override {
        return {
            a * cos(t), // The x coordinate value.
            b * sin(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
    Point getDerivative(const double t) const override {
        return {
            a * -sin(t), // The x coordinate value.
            b * cos(t), // The y coordinate value.
            0 // The z coordinate value.
        };
    }
};

#endif /* Ellipse_h */

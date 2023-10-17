//
//  Helix.h
//  cadex_cpp
//
//  Created by FrenkenFlores on 17.10.2023.
//

#ifndef Helix_h
#define Helix_h
#include "Point.h"
#include "Curve.h"

class Helix: public Curve {
private:
    double radius;
    double step;
    Helix(){}
    Helix(const Helix &h){}
    Helix &operator=(const Helix &h) {};
public:
    Helix(const double r, const double s): radius(r), step(s) {}
    Point getPoint(const double t) const override {
        return {
            radius * cos(t), // The x coordinate.
            radius * sin(t), // The y coordinate.
            step * t // The z coordinate.
        };
    }
    Point getDerivative(const double t) const override {
        return {
            radius * -sin(t), // The x coordinate.
            radius * cos(t), // The y coordinate.
            step // The z coordinate.
        };
    }
};

#endif /* Helix_h */

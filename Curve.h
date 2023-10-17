//
//  Curve.h
//  cadex_cpp
//
//  Created by FrenkenFlores on 17.10.2023.
//

#ifndef Curve_h
#define Curve_h
#include "Point.h"

// Define an interface for all 3D curves.
class Curve {
private:
public:
    // This method will return the coordinates based on the given parameter.
    virtual Point getPoint(const double t) const = 0;
    // This method will return the derivative based on the given parameter.
    virtual Point getDerivative(const double t) const = 0;
    virtual ~Curve() {}
};

#endif /* Curve_h */

//
//  Point.h
//  cadex_cpp
//
//  Created by FrenkenFlores on 17.10.2023.
//

#ifndef Point_h
#define Point_h
#include <iostream>

struct Point {
    double x;
    double y;
    double z;
};

std::ostream &operator<<(std::ostream &out, const Point &p) {
    out << p.x << ", " << p.y << ", " << p.z;
    return out;
}

#endif /* Point_h */

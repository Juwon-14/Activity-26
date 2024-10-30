//
//  Point.cpp
//  Activity-26
//
//  Created by Juwon Hong on 10/29/24.
//

#include "Point.h"

bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

ostream& operator<<(ostream& output, const Point& point) {
    output << "(" << point.x << ", " << point.y << ")";
    return output;
}

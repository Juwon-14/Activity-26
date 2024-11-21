//
//  Point.h
//  Activity-26
//
//  Created by Juwon Hong on 10/29/24.
//

#ifndef POINT_H
#define POINT_H

#include <iostream>

struct Point {
    int x;
    int y;

    bool operator==(const Point& other) const;
};

std::ostream& operator<<(std::ostream& output, const Point& point);

#endif


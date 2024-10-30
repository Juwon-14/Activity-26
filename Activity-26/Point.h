//
//  Point.h
//  Activity-26
//
//  Created by Juwon Hong on 10/29/24.
//

#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

    
    bool operator==(const Point& other) const;
};


ostream& operator<<(ostream& output, const Point& point);

#endif

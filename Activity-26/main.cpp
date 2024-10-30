//
//  main.cpp
//  Activity-26
//
//  Created by Juwon Hong on 10/29/24.
//

#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p1 = {7, 9};
    Point p2 = {7, 9};
    Point p3 = {10, 15};

    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    } else {
        cout << "p1 is not equal to p2" << endl;
    }

    cout << "Point p1: " << p1 << endl;
    cout << "Point p3: " << p3 << endl;

    return 0;
}

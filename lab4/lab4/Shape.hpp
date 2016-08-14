//
//  Shape.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>

using namespace std;

class Shape {
protected:
    int centerX;
    int centerY;
    string name;
public:
    Shape(int centerX, int centerY, string name) {
        centerX = centerX;
        centerY = centerY;
        name = name;
    }
    virtual double area() = 0;
    virtual void draw() = 0;
    ~Shape() {}
};

#endif /* Shape_hpp */
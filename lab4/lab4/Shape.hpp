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
    string name;
public:
    int centerX;
    int centerY;
    Shape(int x, int y, string name): name(name) {
        centerX = x;
        centerY = y;
        cout << "Created " << name;
    }
    virtual double area() = 0;
    virtual void draw() = 0;
    ~Shape() {}
};

#endif /* Shape_hpp */
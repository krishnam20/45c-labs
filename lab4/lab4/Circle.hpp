//
//  Circle.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#define MATH_PI 3.1415926535897

class Circle: public Shape {
private:
    double radius;
public:
    Circle(int x, int y, double radius): Shape(x, y, "Square") {
        radius = radius;
    }
    double area() override {
        return radius * radius * MATH_PI;
    }
};

#endif /* Circle_hpp */

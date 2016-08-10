//
//  Triangle.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

class Triangle: public Shape {
private:
    double base;
    double height;
public:
    Triangle(int x, int y, double base, double height): Shape(x, y, "Triangle") {
        base = base;
        height = height;
    }
    double area() override {
        return base * height / 2.0;
    }
};

#endif /* Triangle_hpp */

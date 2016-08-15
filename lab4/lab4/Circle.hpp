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
#include <math.h>

class Circle: public Shape {
private:
    double radius;
    static int square(int i) {
        return i * i;
    }
public:
    Circle(int x, int y, double radius):
    Shape(x, y, "Circle"),
    radius(radius) {
        centerX = radius;
    }
    
    double area() override {
        return radius * radius * MATH_PI;
    }
    
    void draw() override {
        string earthVillage = "土";
        for (int y = 0; y <= radius * 2; y++) { // y
            for (int j = 0; j <= radius * 2; j++) { // x
                int distanceFromCenter = sqrt(square(radius) - square(radius - y));
                if (j > radius - distanceFromCenter - 0.5 && j < radius + distanceFromCenter + 0.5) {
                    cout << "*";
                    } else { cout << " ";
                }
            }
            cout << endl;
        }

    }
};

#endif /* Circle_hpp */

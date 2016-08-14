//
//  Rectangle.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Square.hpp"

class Rectangle: public Square {
private:
    int height;
    int width;
public:
    Rectangle(int x, int y, int height, int width):
    Square(x, y, width, "Rectangle"),
    height(height),
    width(width) {
        cout << " and height " << height << endl;
    }
    double area() override {
        return (height * width);
    }
    void draw() override {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << "枫 ";
            }
            cout << endl;
        }
    }
};

#endif /* Rectangle_hpp */

// ask 2 things:
// implementation of draw
// why do we need centerX centerY
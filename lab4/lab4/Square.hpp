//
//  Square.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

#include <iostream>
using namespace std;

class Square: public Shape {
private:
    int side;
public:
    Square(int x, int y, int side): Shape(x, y, "Square") {
        side = side;
    }
    double area() override {
        return side * side;
    }
    void draw() override {
        for (int i = 0; i < side; i++) {
            cout << side;
            for (int j = 0; j < side; j++) {
                cout << "*";
            }
        }
    }
};

#endif /* Square_hpp */

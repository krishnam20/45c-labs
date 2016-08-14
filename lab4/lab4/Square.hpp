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
    Square(int x, int y, int side, string name = "Square"):
        Shape(x, y, name),
        side(side) {
        cout << " with width " << side << endl;
    }
    double area() override {
        return (side * side);
    }
    void draw() override {
        for (int i = 0; i < side; i++) {
            for (int j = 0; j < side; j++) {
                cout << "火 ";
            }
                cout << endl;
        }
    }
};

#endif /* Square_hpp */

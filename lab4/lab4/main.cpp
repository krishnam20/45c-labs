//
//  main.cpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Krishna Madhusudan
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include "Shape.hpp"
#include "Picture.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

#include <string>
#include <iostream>
using namespace std;

void print(string str) {
    cout << str << endl;
}

void square() {
    Shape *shape;
    Square square(0, 0, 5);
    cout << square.area() << endl;
//    shape = &square;
//    cout << shape->area() << endl;
}

int main(int argc, const char * argv[]) {
    print("FirstTriangle: height=5, base=5");
    print("SecondTriangle: height=4, base=3");
    print("FirstCircle: radius = 5");
    print("SecondCircle: radius = 10");
    
    print("FirstSquare: side=5");
    square();
    
    print("SecondSquare: side = 10");
    print("FirstRectangle: height = 4 width=8");
    print("SecondRectangle: height=8 width=4");
    return 0;
}

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

void triangle(int height, int base) {
    Triangle triangle(0, 0, height, base);
    cout << "Area is " << triangle.area() << endl;
    triangle.draw();
}

void square() {
    Square square(0, 0, 5);
    cout << "Area is " << square.area() << endl;
    square.draw();
}

void circle() {
    Circle circle(0, 0, 5);
    cout << "Area is " << circle.area() << endl;
    circle.draw();
}

void rectangle() {
    Rectangle rect(0, 0, 4, 8);
    cout << "Area is " << rect.area() << endl;
    rect.draw();
}

int main(int argc, const char * argv[]) {
    print("FirstTriangle: height=5, base=5");
    //triangle(5, 5);
    print("SecondTriangle: height=4, base=3");
    //triangle(4, 3);
    print("FirstCircle: radius = 5");
    circle();
    print("SecondCircle: radius = 10");
    
    
//    print("FirstSquare: side=5");
//    square();
//    
//    print("SecondSquare: side = 10");
//    print("FirstRectangle: height = 4 width=8");
//    rectangle();
//    print("SecondRectangle: height=8 width=4");
    return 0;
}

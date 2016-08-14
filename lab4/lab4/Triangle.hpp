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
    Triangle(int x, int y, double height, double base):
        Shape(x, y, "Triangle"),
        base(base),
        height(height) {
        cout << " with height " << height << " and base " << base << endl;}
    
    double area() override {
        return base * height / 2.0;
    }
    
    void draw() override {
        string waterVillage = "水 ";
        int column = 1;
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < column; j++) {
                cout << waterVillage;
            }
            if (column != base) {
                column++;
            }
            cout << endl;
        }
    }
};

#endif /* Triangle_hpp */

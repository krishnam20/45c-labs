//
//  Picture.hpp
//  lab4
//
//  Created by Huyanh Hoang on 2016. 8. 9..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Picture_hpp
#define Picture_hpp

struct Picture {
private:
public:
    Picture(Shape shape) {}
    Picture *link;
    void add(Shape *sp);
    void drawAll();
    double totalArea();
    ~Picture();
};

#endif /* Picture_hpp */

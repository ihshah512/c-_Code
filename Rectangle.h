//
//  Rectangle.h
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#ifndef Rectangle_h
#define Rectangle_h

#include "Shape.h"

class Rectangle : public Shape { //That how we create derived clas from base clas
    
private:
    double length;
    double width;
    
public:
    Rectangle(double length, double width);
    
    double getArea() const override;
    
    void print() const override;
};



#endif /* Rectangle_h */

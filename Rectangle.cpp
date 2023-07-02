//
//  Rectangle.cpp
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#include <stdio.h>
#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double length, double width)
: length(length), width(width){}


double Rectangle::getArea() const{
    return length*width;
}


void Rectangle::print() const{
    
   // std::cout << "This is a rectangle with width: " << width << " and height: " << length << getArea() << std::endl; //CHECK THIS BEHAIOUCR "this is correct we can do this call of function
    
    std::cout << "This is a rectangle with width: " << width << " and height: " << length << std::endl;
    
    
}



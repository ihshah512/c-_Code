//
//  CIrcle.cpp
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#include "CIrcle.h"
#include <iostream>

Circle::Circle(double radius) : radius(radius) {};

double Circle::getArea() const{
    
    
    return radius*radius;
}

void Circle::print() const{
    
    std::cout << "This is circles' radius " << radius << std::endl; //check getarea behavious
    
}

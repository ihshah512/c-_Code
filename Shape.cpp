//
//  Shape.cpp
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//
#include "Shape.h"
#include <stdio.h>
#include <iostream>

//Virtual function is implemented here however pure virtual function must
//be implemneted in dervied classes
void Shape::print() const{
    
    std::cout << "This is a shape" << std::endl;
}




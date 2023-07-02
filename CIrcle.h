//
//  CIrcle.hpp
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#ifndef CIrcle_hpp
#define CIrcle_hpp

#include <stdio.h>
#include "Shape.h"

class Circle : public Shape{
    
private:
    double radius;
    
public:
    
    Circle(double radius);
    double getArea() const override;
    void print() const override;
};

#endif /* CIrcle_hpp */

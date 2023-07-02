//
//  main.cpp
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "CIrcle.h"
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    Rectangle rectangle(5.1, 3.1); //crate the object
    Circle circle(2); //crate the object
    
    std::vector<Shape*> shapes; //Thtas how we declare vecotr with pointer
    
    shapes.push_back(&rectangle);
    shapes.push_back(&circle);
       
    for (const auto& shape : shapes){
       
        shape->print();
        std::cout << endl;
        
        std::cout << shape->getArea() << std::endl;
        
        std::cout << endl;
    }
    
    
    return 0;
}

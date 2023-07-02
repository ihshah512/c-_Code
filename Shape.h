//
//  Shape.h
//  Math_Shapes
//
//  Created by Imran Shah on 7/1/23.
//

#ifndef Shape_h
#define Shape_h

//This class would be an abstract class because it has atleast one pure virtual function
class Shape{
    
public:
    virtual double getArea() const =  0; //pure virual function declared
    virtual void print() const; //VIRTUAL FUNCTION
};

#endif /* Shape_h */
/*
 In C++, both pure virtual functions and virtual functions are used to achieve polymorphism and dynamic dispatch. However, there are some key differences between them:

 Virtual Functions:

 Virtual functions are declared in a base class and can be overridden by derived classes.
 The base class provides a default implementation of the virtual function, but derived classes can provide their own implementation.
 Virtual functions allow dynamic binding, meaning the function call is resolved at runtime based on the type of the object pointed to or referenced.
 The base class can have a non-virtual implementation of the function, which can be called using the base class pointer or reference.
 Virtual functions are denoted by using the virtual keyword in the base class declaration and optionally in the derived class declaration.
 Pure Virtual Functions:

 Pure virtual functions are declared in a base class but have no implementation.
 Pure virtual functions act as placeholders for functions that must be overridden by any derived class.
 A class containing one or more pure virtual functions is called an abstract class, and objects of abstract classes cannot be created.
 Derived classes must provide their own implementation for pure virtual functions; otherwise, they will also become abstract classes.
 Pure virtual functions enforce derived classes to provide a specific behavior, ensuring that certain methods are implemented in all derived classes.
 Pure virtual functions are denoted by using the virtual keyword and assigning 0 to the function declaration in the base class. For example: virtual void functionName() = 0;
 In summary, virtual functions provide a default implementation in the base class but can be overridden in derived classes, while pure virtual functions have no implementation and must be overridden by derived classes. Pure virtual functions enforce a specific behavior in derived classes, making them essential for creating abstract classes and achieving proper polymorphism.
 
 
 */

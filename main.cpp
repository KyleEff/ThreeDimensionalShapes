/*
Kyle Free
COSC 1437 - Programming Fundamentals II
11 / 18 / 2023
Assignment Description:
    1. Three Dimensional Figures
    In keeping with the geometry theme that has been our object-oriented programming experience,
        you will create an abstract class named Shape.  The class Shape should be defined as follows:
    - sides (int) //A variable that holds the number of sides the face of the shape has.
    You should also have 3 constructors:
    - a no-arg constructor that initializes the number of sides to 0
    - a parameterized constructor that receives an int parameter.  The method should call the setSides method 
    - copy constructor
    You should also define the following methods:
    - setSides(int) //setter method for the private member
    - getSides() //getter method for the private member
    - calcArea() (double) //An abstract method.

    This Shape class is to be extended by the following classes:

    - ThreeDimensional (an abstract class).  This class should have a private instance member faces (int),
        that stores the number of faces of the three dimensional object. Create a no-arg as well as a
        parameterized constructor.  Also define getters and setters for the private member variable and
        define an abstract method calcVolume() that returns a double value. 

    - Rectangle (you may use the one you have already created in previous assignments, with modifications)
    - Triangle
    - Circle (you may use the one from previous assignment with modifications)

    All these classes should define the method calcArea() based on its own respective geometry. 

    The following classes should extend the ThreeDimensional class:
    - Cylinder
    - Box
    - TriPrism

    Each of these should define surfaceArea() and calcVolume() for the respective geometry. You may
        choose to use aggregation to help define the Cylinder, Box, and TriPrism classes.

    Create a main function to demonstrate your objects and functions. 

NOTES:
    Two Dimensional Shapes:
        Shape abstract class
        Rectangle inherits from Shape
        Triangle inherits from Shape
        Circle inherits from Shape

    Three Dimensional Shapes:
        ThreeDimensional abstract class inherits from Shape
        Box inherits from ThreeDimensional, aggregates Rectangle
        TriPrism inherits from ThreeDimensional, aggregates Triangle
        Cylinder inherits from ThreeDimensional, aggregates Circle

    Run class:
        Interfaces with all the classes, except the abstract ones.
        Mutator functions are defined, but not used.
        All the dimensions are defined using parameterized constructors.
        This is done to avoid inputting all the dimensions at runtime.
        Inheritance, Polymorphism, and aggregations are all demonstrated.
*/

#include "Run.h"
#include <iostream>

using namespace std;

int main() {

    Run program;
    
    return 0;
}
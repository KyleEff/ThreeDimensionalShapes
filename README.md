# ThreeDimensionalShapes
An exercise in Inheritance and Polymorphism. Be sure to read the instructions

Three Dimensional Figures
In keeping with the geometry theme that has been our object-oriented programming experience, you will create an abstract class named Shape.  The class Shape should be defined as follows:

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

- ThreeDimensional (an abstract class).  This class should have a private instance member faces (int), that stores the number of faces of the three dimensional object. Create a no-arg as well as a parameterized constructor.  Also define getters and setters for the private member variable and define an abstract method calcVolume() that returns a double value. 

- Rectangle (you may use the one you have already created in previous assignments, with modifications)
- Triangle
- Circle (you may use the one from previous assignment with modifications)

All these classes should define the method calcArea() based on its own respective geometry. 

The following classes should extend the ThreeDimensional class:
- Cylinder
- Box
- TriPrism

Each of these should define surfaceArea() and calcVolume() for the respective geometry. You may choose to use aggregation to help define the Cylinder, Box, and TriPrism classes.

Create a main function to demonstrate your objects and functions. 

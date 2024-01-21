#pragma once

#include <iostream>

using namespace std;

// Abstract Class
class Shape {
// Attributes
    int sides;
public:
// Constructors
    Shape(); // Default
    Shape(int); // Parameterized
    Shape(const Shape&); // Copy Constructor
// Virtual destructor
    virtual ~Shape();
// Member Functions
    void setNumSides(int); // Mutator

    virtual int getNumSides() const; // Accessor

    // Pure Virtual Functions
    virtual double calcArea() const = 0; // Calculate the area and return it
    virtual void print() const = 0; // Print the attributes of the Shape
};
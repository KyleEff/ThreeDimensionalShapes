#pragma once

#include "Shape.h"

class Rectangle : public Shape {
// Attributes
    double
        length,
        width;
public:
// Constructors
    Rectangle(); // Default
    Rectangle(int, int); // Parameterized
    Rectangle(const Rectangle&); // Copy
// Member Functions
    void setLength(double); // Accessor
    void setWidth(double); // Accessor

    double getLength() const; // Mutator
    double getWidth() const; // Mutator

// Overridden Virtual functions
    double calcArea() const override; // Calculate area and return it
    void print() const override; // Print the attributes of the Rectangle
};
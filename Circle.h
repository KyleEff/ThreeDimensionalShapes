#pragma once

#include "Shape.h"

class Circle : public Shape {
// Attributes
    double radius;
public:
// Constructors
    Circle(); // Default
    Circle(double); // Parameterized
    Circle(const Circle& orginal); // Copy
// Member Functions
    void setRadius(double); // Mutator

    double getRadius() const; // Accessor

    // Overridden Virtual Functions
    double calcArea() const override; // Calculate the area and return it
    void print() const override; // Print all the attributes of the Circle
};
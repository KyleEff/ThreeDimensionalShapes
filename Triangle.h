#pragma once

#include "Shape.h"

class Triangle : public Shape {
// Attributes
    double sideLengths[3];
public:
// Constructors
    Triangle(); // Default
    Triangle(double, double, double); // Parameterized
    Triangle(const Triangle&); // Copy
// Member Functions
    void setSides(); // Mutator

    virtual double getSides(int); // Accessor
    void printSideLengths() const; // Accessor

    bool checkSides() const; // Validate the lengths of the sides

    // Overridden Virtual Functions
    double calcArea() const override; // Calculates the area and then returns it
    void print() const override; // Prints the attributes of the Triangle
};

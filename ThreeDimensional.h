#pragma once

#include "Shape.h"
#include "Circle.h"

// Abstract Class
class ThreeDimensional : public Shape {
// Attributes
    int faces;
    double height;
public:
// Constructors
    ThreeDimensional(); // Default
    ThreeDimensional(int, double); // Parameterized
// Member Functions
    void setFaces(int); // Mutator
    void setHeight(double); // Mutator

    virtual double getHeight() const; // Accessor
    virtual int getFaces() const; // Accessor

    // Pure Virtual Functions 
    virtual double calcVolume() const = 0;
    virtual double surfaceArea() const = 0;
};

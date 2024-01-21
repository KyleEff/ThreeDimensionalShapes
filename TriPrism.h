#pragma once

#include "ThreeDimensional.h"
#include "Triangle.h"

class TriPrism : public ThreeDimensional {
// Attribute
    Triangle* baseShape{ nullptr };
public:
// Constructors
    TriPrism(); // Default
    TriPrism(double, double, double, double); // Parameterized
    TriPrism(const TriPrism&); // Copy
// Destructor
    ~TriPrism();
// Member Functions
    // Overridden Virtual Functions
    double calcArea() const override; // Calculate and return the area of the baseshape
    double calcVolume() const override; // Calculate and return the volume of the 3D shape
    double surfaceArea() const override; // Calculate and return the surface area the shape

    void print() const override; // Print all attributes of the 3D shape
};
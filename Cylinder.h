#pragma once

#include "ThreeDimensional.h"
#include "Circle.h"

class Cylinder : public ThreeDimensional {
// Attributes
    Circle* baseShape{ nullptr };
public:
// Constructors
    Cylinder(); // Default
    Cylinder(double, double); // Parameterized
    Cylinder(const Cylinder&); // Copy
// Destructor
    ~Cylinder();
// Member Functions
    double calcArea() const override; // Returns the area of the base shape (Pure virtual)
    double calcVolume() const override; // Calculate and return the volume of the 3D shape
    double surfaceArea() const override; // Calculate and return the surface area of the 3D shape
    void print() const override; // Print all the attributes of the 3D shape
};
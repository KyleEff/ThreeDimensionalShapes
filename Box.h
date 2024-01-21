#pragma once

#include "ThreeDimensional.h"
#include "Rectangle.h"

class Box : public ThreeDimensional {
// Attributes
    Rectangle* baseShape{ nullptr };
public:
// Constructors
    Box(); // Default
    Box(double, double, double); // Parameterized
    Box(const Box&); // Copy
// Destructor
    ~Box();
// Member Functions

    double calcArea() const override;
    double calcVolume() const override;
    double surfaceArea() const override;
    void print() const override;
};

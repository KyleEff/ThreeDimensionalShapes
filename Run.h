#pragma once

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Box.h"
#include "TriPrism.h"
#include "Cylinder.h"
#include <iostream>

using namespace std;

// The Run class interfaces with all the require classes using a polymorphic pointer
class Run {
// Attributes
    Shape* polygon{ nullptr }; // Dynamic polymorphic pointer
public:
// Constructor
    Run();
// Destructor
    ~Run();
// Member Functions
    void createRectangle(); // 2D
    void createTriangle(); // 2D
    void createCircle(); // 2D
    void createThreeD(); // Creates three 3D figures

    void run(); // Runs the program
};

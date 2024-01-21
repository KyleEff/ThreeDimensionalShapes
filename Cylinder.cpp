#include "Cylinder.h"

// Constructors
/*************************Default*************************
* Calls the abstract constructor to set the number of faces to 2.
* Allocates a default Circle object as the base shape.
* Defaults the height to 0.0
**********************************************************/
Cylinder::Cylinder() :
    ThreeDimensional(2, 0.0),
    baseShape(new Circle()) {}

/**************************************Parameterized**************************************
* Calls the abstract constructor to set the number of faces to 2.
* Sets the base shape to a Circle with the radius of the input parameters.
* Sets the height to the second double parameter.
******************************************************************************************/
Cylinder::Cylinder(double radius, double height) :
    ThreeDimensional(2, height),
    baseShape(new Circle(radius)) {}

/*******************************Copy*******************************
* Calls the abstract constructor to set the number of faces to 2.
* Copy the base shape from the original Circle.
* Copy the height from the original Circle.
*******************************************************************/
Cylinder::Cylinder(const Cylinder& original) :
    ThreeDimensional(2, original.getHeight()),
    baseShape(original.baseShape) {}

// Destructor
/*********************Destructor****************
* Deletes the dynamically allocated base shape
************************************************/
Cylinder::~Cylinder()
    { delete baseShape; }

/********************calcArea()********************
* Calls the calcArea function from the base shape
* Required because calcArea is pure virtual
***************************************************/
inline double Cylinder::calcArea() const
    { baseShape->calcArea(); }

/**************calcVolume()**************
* Returns the volume of the 3D shape.
* V = (pi * r ^ 2) * h
*****************************************/
inline double Cylinder::calcVolume() const
    { return baseShape->calcArea() * getHeight(); }

/********************surfaceArea()********************
* Calculates and returns the surface area of the 3D object
* SA = 2 * pi * r * (r + h)
******************************************************/
inline double Cylinder::surfaceArea() const
    { return 2 * 3.14 * baseShape->getRadius() * (baseShape->getRadius() * getHeight()); }

/*******************print()*******************
* Prints all the attributes of the Box
**********************************************/
void Cylinder::print() const {

    cout
        << "\nCylinder Dimensions\n"
        << "Radius: "
        << baseShape->getRadius()
        << endl

        << "Height: "
        << getHeight()
        << " units"
        << endl

        << "Volume: "
        << calcVolume()
        << " units cubed"
        << endl

        << "Surface Area: "
        << surfaceArea()
        << " units squared"
        << endl;
}

#include "Circle.h"
#include <cmath>

// Constructors
/************************Default************************
* Calls the Shape constructor to set the sides to 0.
********************************************************/
Circle::Circle() :
    Shape(0),
    radius(0.0) {}

/********************Parameterized********************
* Calls the Shape constructor to set the sides to 0.
* Sets the radius to the input parameter
******************************************************/
Circle::Circle(double radius) :
    Shape(0),
    radius(radius) {}

/*********************Copy********************
* Calls the Shape copy constructor to set the sides to 0.
* Sets the radius to that of the original Circle
**********************************************/
Circle::Circle(const Circle& orginal) :
    Shape(orginal),
    radius(orginal.radius) {}

// Member Functions
/******************setRadius(double)******************
* Sets the raidus of the Circle based on the input parameter
******************************************************/
inline void Circle::setRadius(double radius)
    { this->radius = radius; }

/**************getRadius()*************
* Returns the radius of the Circle
***************************************/
inline double Circle::getRadius() const
    { return radius; }

/***************calcArea()**************
* Returns the area of the Circle
* PIr^2
****************************************/
inline double Circle::calcArea() const
    { return 3.14 * pow(radius, 2); }

/*******************print()*******************
* Prints out all the attributes of the Circle
**********************************************/
inline void Circle::print() const {

    cout 
        << "\nCircle Dimensions"
        << endl

        << "Number of Sides: "
        << getNumSides()
        << endl

        << "Radius: "
        << getRadius()
        << endl

        << "Area: "
        << calcArea()
        << " square units"
        << endl;
}

#include "TriPrism.h"

// Constructors
/*************************Default*************************
* Calls the abstract constructor to set the number of faces to 5.
* Allocates a default Triangle object as the base shape.
* Defaults the height to 0.0
**********************************************************/
TriPrism::TriPrism() :
    ThreeDimensional(5, 0.0),
    baseShape(new Triangle()) {}

/**************************************Parameterized**************************************
* Calls the abstract constructor to set the number of faces to 5.
* Sets the base shape to a Rectangle with the length and width of the input parameters.
* Sets the height to the forth double parameter.
******************************************************************************************/
TriPrism::TriPrism(double a, double b, double c, double height) :
    ThreeDimensional(5, height),
    baseShape(new Triangle(a, b, c)) {}

/*******************************Copy*******************************
* Calls the abstract constructor to set the number of faces to 5.
* Copy the base shape from the original TriPrism.
* Copy the height from the original TriPrism.
*******************************************************************/
TriPrism::TriPrism(const TriPrism& orginal) :
    ThreeDimensional(5, orginal.getHeight()),
    baseShape(orginal.baseShape) {}

// Destructor
/*********************Destructor****************
* Deletes the dynamically allocated base shape
************************************************/
TriPrism::~TriPrism()
    { delete baseShape; }

/********************calcArea()********************
* Calls the calcArea function from the base shape
* Required because calcArea is pure virtual
***************************************************/
inline double TriPrism::calcArea() const
    { baseShape->calcArea(); }

/**************calcVolume()**************
* Returns the volume of the 3D shape.
* V = Area times height
*****************************************/
inline double TriPrism::calcVolume() const
    { return baseShape->calcArea() * getHeight(); }

/*********************surfaceArea()********************
* Calculates and returns the surface area of the 3D object
* SA = ((a + b + c) * height) * (2 * area of the base)
*******************************************************/
inline double TriPrism::surfaceArea() const {

    return (
        (baseShape->getSides(0)         // Side A
            + baseShape->getSides(1)    // Side B
            + baseShape->getSides(2))   // Side C
        * getHeight()
    )
    + (2 * baseShape->calcArea());
}

/*******************print()*******************
* Prints all the attributes of the Box
**********************************************/
void TriPrism::print() const {

    cout
        << "\nTriangular Prism Dimensions\n"
        << "Number of Faces: "
        << getFaces()
        << endl;

        baseShape->printSideLengths();

    cout
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

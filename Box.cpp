#include "Box.h"

// Constructor
/*********************************Default*********************************
* Calls the abstract constructor to set the number of faces to 6.
* Allocates a default Rectangle object as the base shape.
* Defaults the height to 0.0
**************************************************************************/
Box::Box() :
    ThreeDimensional(6, 0.0),
    baseShape(new Rectangle()) {}

/**************************************Parameterized**************************************
* Calls the abstract constructor to set the number of faces to 6.
* Sets the base shape to a Rectangle with the length and width of the input parameters.
* Sets the height to the third double parameter.
******************************************************************************************/
Box::Box(double length, double width, double height) :
    ThreeDimensional(6, height),
    baseShape(new Rectangle(length, width)) {}

/*******************************Copy*******************************
* Calls the abstract constructor to set the number of faces to 6.
* Copys the base shape from the original Box.
* Copys the height from the original Box.
*******************************************************************/
Box::Box(const Box& original) :
    ThreeDimensional(6, original.getHeight()),
    baseShape(original.baseShape) {}

// Destructor
/*********************Destructor****************
* Deletes the dynamically allocated base shape
************************************************/
Box::~Box()
    { delete baseShape; }

/********************calcArea()********************
* Calls the calcArea function from the base shape
* Required because calcArea is pure virtual
***************************************************/
inline double Box::calcArea() const
    { baseShape->calcArea(); }

/**************calcVolume()**************
* Returns the volume of the 3D shape.
* Length times width times height
*****************************************/
inline double Box::calcVolume() const
    { return baseShape->getLength() * baseShape->getWidth() * getHeight(); }

/********************surfaceArea()********************
* Calculates and returns the surface area of the Box.
* SA = 2LW + 2WH + 2LH
******************************************************/
inline double Box::surfaceArea() const{
    
    return
          (2 * baseShape->getLength() * baseShape->getWidth())
        + (2 * baseShape->getLength() * getHeight())
        + (2 * baseShape->getWidth() * getHeight());
}

/*******************print()*******************
* Prints all the attributes of the Box
**********************************************/
void Box::print() const {

    cout
        << "\nBox Dimensions\n"

        << "Number of Faces: "
        << getFaces() // Called from the base class
        << endl

        << "Length: "
        << baseShape->getLength()
        << " units"
        << endl

        << "Width: "
        << baseShape->getWidth()
        << " units"
        << endl

        << "Height: "
        << getHeight() // Called from the base class
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

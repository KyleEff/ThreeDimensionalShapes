#include "Rectangle.h"

// Constructors
/*************Default Constructor*************
* Calls the Shape constructor to set the number of sides to 4.
* Sets the length and width to a default of zero.
**********************************************/
Rectangle::Rectangle() :
    Shape(4),
    length(0.0),
    width(0.0) {}

/**************Parameterized Constructor**************
* Calls the Shape constructor to set the number of sides to 4.
* Sets the length and width to the input parameters
******************************************************/
Rectangle::Rectangle(int length, int width) :
    Shape(4),
    length(length),
    width(width) {}

/**************************Copy Constructor**************************
* Calls the Shape constructor to set the number of sides to 4.
* Copys the length and width from the original Rectangle
*********************************************************************/
Rectangle::Rectangle(const Rectangle& orginal) :
    Shape(4),
    length(orginal.length),
    width(orginal.width) {}

// Member functions
    // Mutators
/************************setLength(double)************************
* Sets the length of the Rectangle to the input parameter
******************************************************************/
inline void Rectangle::setLength(double length)
    { this->length = length; }

/*************************setWidth(double)************************
* Sets the width of the Triangle to the input parameter
******************************************************************/
inline void Rectangle::setWidth(double width)
    { this->width = width; }

    // Accessors
/**************getLength()*************
* Returns the length of the Rectangle
***************************************/
inline double Rectangle::getLength() const
    { return length; }

/*************getWidth()*************
* Returns the width of the Rectangle
*************************************/
inline double Rectangle::getWidth() const
    { return width; }

    // Overridden Virtual Functions
/************calcArea()************
* Returns the area of the Rectangle
* Area = Length times width
***********************************/
inline double Rectangle::calcArea() const
    { return length * width; }

/********************print()********************
* Prints all the attributes of the Rectangle
************************************************/
inline void Rectangle::print() const {

    cout
        << "\nRectangle Dimensions"
        << endl

        << "Number of Sides: "
        << getNumSides()
        << endl

        << "Length: "
        << getLength()
        << " units"
        << endl

        << "Width: "
        << getWidth()
        << " units"
        << endl

        << "Area: "
        << calcArea()
        << " units squared"
        << endl;
}

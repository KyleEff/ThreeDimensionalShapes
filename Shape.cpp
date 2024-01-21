#include "Shape.h"

// Constructors
/********Default Constructor********
* Sides defaulted to zero
************************************/
Shape::Shape() :
    sides(0) {}

/********Parameterized Constructor********
* Sides set to the input parameter
******************************************/
Shape::Shape(int sides) :
    sides(sides) {}

/*************Copy Constructor***************
* Copys the sides from the original shape
*********************************************/
Shape::Shape(const Shape& orginal) :
    sides(orginal.sides) {}

Shape::~Shape() {}

// Member functions
/*****************setNumSides(int)*****************
* Sets the sides to the provided input parameter
****************************************************/
inline void Shape::setNumSides(int sides)
    { this->sides = sides; }

/******************getNumSides()*****************
* Returns the number of sides that the shape has
**************************************************/
inline int Shape::getNumSides() const
    { return sides; }

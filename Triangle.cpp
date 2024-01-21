#include "Triangle.h"
#include <iostream>
#include <cmath> // For the square root formula

using namespace std;

// Constructors
/****************************Default****************************
* Calls the Shape constructor to set the number of sides to 3.
* Calls the function to manually set the sides with input.
****************************************************************/
Triangle::Triangle() :
    Shape(3)
        { setSides(); }

/*****************************Parameterized****************************
* Calls the Shape constructor to set the number of sides to 3.
* Sets the 3 elements of the sideLength array to the 3 arguements.
***********************************************************************/
Triangle::Triangle(double a, double b, double c) :
    Shape(3) {

        sideLengths[0] = a;
        sideLengths[1] = b;
        sideLengths[2] = c;

        if (!checkSides()) {

            cout << "Invalid Dimensions" << endl;
            setSides();
        }
    }

/**************************Copy Constructor****************************
* Calls the Shape constructor to set the number of sides to 3.
* Uses a for-loop to run through the original array and copy into the
*   new sideLengths array 
***********************************************************************/
Triangle::Triangle(const Triangle& original) :
    Shape(4) {

        for (auto i{ 0 }; i < original.getNumSides(); i++)
            sideLengths[i] = original.sideLengths[i];
    }

// Member Functions
/***************************setSides()***************************
* Manually asks the user for input to set the lengths of the sides
*****************************************************************/
void Triangle::setSides() {

    while (!checkSides()) {

        cout << "Enter the lengths of the three sides:" << endl;

        for (int i = 0; i < getNumSides(); i++)
            cin >> sideLengths[i];

        printSideLengths();
    }
}

// Accessors
/**********************getSides(int)*********************
* Returns the length of the side index by the parameter
*********************************************************/
inline double Triangle::getSides(int index)
    { return sideLengths[index]; }

/**********************printSideLengths()*********************
* Uses a for-loop to print all sides with corresponding labels
**************************************************************/
void Triangle::printSideLengths() const {

    char labels[4]{ "abc" };

    cout << "Lengths of the Sides:" << endl;

    for (auto i{ 0 }; i < 3; i++)
        cout
            << labels[i]
            << ": "
            << sideLengths[i]
            << " units"
            << endl;
}

inline bool Triangle::checkSides() const {

    return
        (sideLengths[0] + sideLengths[1]) > sideLengths[2]
        && (sideLengths[0] + sideLengths[2]) > sideLengths[1]
        && (sideLengths[1] + sideLengths[2]) > sideLengths[0]
    ;
}
// Overridden Virtual Functions
/***************************calcArea()***************************
* Uses Heron's Formula to calculate the area of the triangle
* s = (a+b+c) / 2
* Area = Square root of (s(s-a)(s-b)(s-c))
*****************************************************************/
double Triangle::calcArea() const {

    double s{ 0 };

    for (auto i : sideLengths)
        s += i;

    s /= 2;

    return sqrt(s * (s - sideLengths[0]) * (s - sideLengths[1]) * (s - sideLengths[2]));
}

/*******************print()******************
* Prints all the attributes of the Triangle
*********************************************/
void Triangle::print() const {

    cout
        << "\nTriangle Dimensions"
        << endl

        << "Number of Sides: "
        << getNumSides()
        << endl;

    printSideLengths();

    cout
        << "Area: "
        << calcArea()
        << " square units"
        << endl;
}

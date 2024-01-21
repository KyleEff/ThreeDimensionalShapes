#include "Run.h"

using namespace std;

// Constructor calls the run function to run the program
Run::Run()
    { run(); }

// Destructor that destroys the dynamically allocated pointer
Run::~Run()
    { delete polygon; }

/******************createRectangle()******************
* Creates a Rectangle object, with a length and width
* Prints the Rectangle
* Destroys the heap memory, and nullifies the pointer
******************************************************/
void Run::createRectangle() {

    if (!polygon) {

        polygon = new Rectangle(10, 14);
        polygon->print();

        delete polygon;
        polygon = nullptr;
    }
}

/****************************createTriangle()******************************
* Creates a Triangle object, with all three sides defined in the arguements
* Prints the Triangle
* Destroys the heap memory, and nullifies the pointer
***************************************************************************/
void Run::createTriangle() {

    if (!polygon) {

        polygon = new Triangle(11, 12, 13);
        polygon->print();

        delete polygon;
        polygon = nullptr;
    }
}

/******************createCircle()*******************
* Creates a Circle object, with a radius
* Prints the Circle
* Destroys the heap memory, and nullifies the pointer
****************************************************/
void Run::createCircle() {

    if (!polygon) {

        polygon = new Circle(15);
        polygon->print();

        delete polygon;
        polygon = nullptr;
    }
}

/*********************createThreeD()***********************
* Dynamically allocates three 3D objects one at a time using
*   the polymorphic pointer, then destroys the heap memory.
* It finally nullifies the pointer when finished.
***********************************************************/
void Run::createThreeD() {

    if (!polygon) {

        polygon = new Box(10, 15, 20);
        polygon->print();

        delete polygon;

        polygon = new TriPrism(11, 12, 13, 15);
        polygon->print();

        delete polygon;

        polygon = new Cylinder(15, 20);
        polygon->print();

        delete polygon;
        polygon = nullptr;
    }
}

/************************run()**************************
* Creates three 2D objects, then prints them.
* Creates three 3D objects, then prints them.
* Dynamically allocated memory is cleared and
*   nullified when finished.
********************************************************/
void Run::run() {

    createRectangle();
    createTriangle();
    createCircle();
    createThreeD();
}

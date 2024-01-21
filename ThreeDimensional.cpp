#include "ThreeDimensional.h"

// Constructors
/*************Default*************
* Defaults the number of faces to 0.
**********************************/
ThreeDimensional::ThreeDimensional() :
    faces(0) {}

/***********************Parameterized***********************
* Constructs the height and number of faces based on the input parameters
************************************************************/
ThreeDimensional::ThreeDimensional(int faces, double height) :
    faces(faces),
    height(height) {}

/********************setFaces(int)********************
* Sets the number of faces based on the input parameter
******************************************************/
inline void ThreeDimensional::setFaces(int faces)
    { this->faces = faces; }

/**************setHeight(double)**************
* Sets the height based on the input parameter
**********************************************/
inline void ThreeDimensional::setHeight(double height)
    { this->height = height; }

/***************getHeight()***************
* Returns the height of the 3D object
******************************************/
inline double ThreeDimensional::getHeight() const
    { return height; }

/***********getFaces()***********
* Returns the number of faces
*********************************/
inline int ThreeDimensional::getFaces() const
    { return faces; }
    
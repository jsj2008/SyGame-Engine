/////////////////////////////////////////////////////////////////////////////////
// File : Lib/Math/Types/Discrete/Box3.h
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Discrete 2D rectangular region
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Header prelude
#ifndef SCARAB_LIB_MATH_TYPES_DISCRETE_BOX3_H
#define SCARAB_LIB_MATH_TYPES_DISCRETE_BOX3_H

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "Point3.h"

/////////////////////////////////////////////////////////////////////////////////
// Constants definitions

/////////////////////////////////////////////////////////////////////////////////
// The Box3 class
class Box3
{
public:
	// Constructors
	Box3(); // uninitialized
	Box3(Int left, Int front, Int top, Int right, Int back, Int down);
	Box3(const Int vLeftFrontTop[3], const Int vRightBackDown[3]);
	Box3(const Point3 & vLeftFrontTop, UInt width, UInt height, UInt depth);
	Box3(const Point3 & vLeftFrontTop, const Point3 & vRightBackDown);
	Box3(const Box3 & rhs);
	~Box3();

	// Assignment operator
	inline Box3 & operator=(const Box3 & rhs);

	// Boolean operations
	inline Bool operator==(const Box3 & rhs) const;
	inline Bool operator!=(const Box3 & rhs) const;

	// Methods
	inline UInt Width() const;
	inline UInt Height() const;
	inline UInt Depth() const;
	inline Bool Contains(const Point3 & vPt) const; // top-left-front filling convention

	// Data
	Point3 LeftFrontTop;  // Both points are included in the box,
	Point3 RightBackDown; // width, height & depth are returned accordingly
};

/////////////////////////////////////////////////////////////////////////////////
// Backward Includes (Inlines & Templates)
#include "Box3.inl"

/////////////////////////////////////////////////////////////////////////////////
// Header end
#endif // SCARAB_LIB_MATH_TYPES_DISCRETE_BOX3_H

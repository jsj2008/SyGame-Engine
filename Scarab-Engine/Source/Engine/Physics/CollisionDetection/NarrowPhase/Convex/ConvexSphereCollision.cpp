/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Physics/CollisionDetection/NarrowPhase/Convex/ConvexSphereCollision.cpp
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Narrow-Phase : Convex, Convex-Sphere
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "ConvexSphereCollision.h"

/////////////////////////////////////////////////////////////////////////////////
// ConvexSphereCollision implementation
ConvexSphereCollision::ConvexSphereCollision( TransformedShapeConvex * pShapeA, TransformedShapeConvex * pShapeB ):
    SingleSideVClip( pShapeA, pShapeB )
{
    // nothing to do
}
ConvexSphereCollision::~ConvexSphereCollision()
{
    // nothing to do
}



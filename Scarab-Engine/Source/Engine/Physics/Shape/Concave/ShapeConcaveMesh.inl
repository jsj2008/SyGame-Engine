/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Physics/Shape/Concave/ShapeConcaveMesh.inl
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Shapes : Concave, Mesh
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// ShapeConcaveMesh implementation
inline ShapeType ShapeConcaveMesh::GetType() const {
    return SHAPE_CONCAVE_MESH;
}

inline Void ShapeConcaveMesh::QueryNodes( const BVAABox & bvAABox, HNodeQuery * pQuery ) const {
    m_hNodeTree.CollideAABox( bvAABox, pQuery );
}

inline Void ShapeConcaveMesh::QueryTriangles( const BVAABox & bvAABox, HTriangleQuery * pQuery ) const {
    m_hTriangleTree.CollideAABox( bvAABox, pQuery );
}
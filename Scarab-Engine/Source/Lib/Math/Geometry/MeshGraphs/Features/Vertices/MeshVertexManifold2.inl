/////////////////////////////////////////////////////////////////////////////////
// File : Lib/Math/Geometry/MeshGraphs/Features/Vertices/MeshVertexManifold2.inl
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Vertex features : 2-Manifold MeshGraphs
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// MeshVertexManifold2 implementation
inline MeshVertexType MeshVertexManifold2::GetVertexType() const {
    return MESH_VERTEX_MANIFOLD2;
}

//inline MeshVertex * MeshVertexManifold2::Downgrade() {
//    return NULL;
//}

/////////////////////////////////////////////////////////////////////////////////
// MeshVertexManifold2_V implementation
inline MeshLinkageType MeshVertexManifold2_V::GetLinkageType() const {
    return MESH_LINKAGE_V;
}

_MESHFEATURE_IMPLEMENT_INLINES_2( MeshVertexManifold2_V, Vertex, Vertices )

/////////////////////////////////////////////////////////////////////////////////
// MeshVertexManifold2_E implementation
inline MeshLinkageType MeshVertexManifold2_E::GetLinkageType() const {
    return MESH_LINKAGE_E;
}

_MESHFEATURE_IMPLEMENT_INLINES_2( MeshVertexManifold2_E, Edge, Edges )

/////////////////////////////////////////////////////////////////////////////////
// MeshVertexManifold2_VE implementation
inline MeshLinkageType MeshVertexManifold2_VE::GetLinkageType() const {
    return MESH_LINKAGE_VE;
}

_MESHFEATURE_IMPLEMENT_INLINES_2( MeshVertexManifold2_VE, Vertex, Vertices )
_MESHFEATURE_IMPLEMENT_INLINES_2( MeshVertexManifold2_VE, Edge, Edges )
/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Rendering/2D/Resources/GPU2DMesh.cpp
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : GPU 2D-Resource : Meshes
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None.
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "GPU2DMesh.h"

#include "../GPU2DContext.h"

/////////////////////////////////////////////////////////////////////////////////
// GPU2DMesh implementation
GPU2DMesh::GPU2DMesh( GPU2DContext * pContext2D ):
    m_hDevice2DMesh( &(pContext2D->m_hDevice2DContext) )
{
    m_pContext2D = pContext2D;
}
GPU2DMesh::~GPU2DMesh()
{
    if ( IsOpened() )
        Close();
    if ( IsBound() )
        UnBind();
}

Void GPU2DMesh::Bind()
{
    Assert( !(IsBound()) );

    m_hDevice2DMesh.Create();

    m_pContext2D->_RegisterMesh( this );
}
Void GPU2DMesh::UnBind()
{
    Assert( IsBound() );

    m_pContext2D->_UnRegisterMesh( this );

    m_hDevice2DMesh.Destroy();
}

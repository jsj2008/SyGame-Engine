/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Rendering/2D/Resources/GPU2DRenderState.cpp
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : GPU 2D-Resource : Render States
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
#include "GPU2DRenderState.h"

#include "../GPU2DContext.h"

/////////////////////////////////////////////////////////////////////////////////
// GPU2DRenderState implementation
GPU2DRenderState::GPU2DRenderState():
    m_hDevice2DRenderState()
{
    // nothing to do
}
GPU2DRenderState::~GPU2DRenderState()
{
    if ( IsBound() )
        UnBind();
}

/////////////////////////////////////////////////////////////////////////////////
// GPU2DTextRenderState implementation
GPU2DTextRenderState::GPU2DTextRenderState():
    m_hDevice2DTextRenderState()
{
    // nothing to do
}
GPU2DTextRenderState::~GPU2DTextRenderState()
{
    if ( IsBound() )
        UnBind();
}


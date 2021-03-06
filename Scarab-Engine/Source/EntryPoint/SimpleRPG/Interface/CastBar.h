/////////////////////////////////////////////////////////////////////////////////
// File : EntryPoint/SimpleRPG/Interface/CastBar.h
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : SimpleRPG, Interface : CastBar
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None.
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Header prelude
#ifndef SCARAB_ENTRYPOINT_SIMPLERPG_INTERFACE_CASTBAR_H
#define SCARAB_ENTRYPOINT_SIMPLERPG_INTERFACE_CASTBAR_H

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "../Gameplay/Character.h"

/////////////////////////////////////////////////////////////////////////////////
// Constants definitions

/////////////////////////////////////////////////////////////////////////////////
// The CastBarModel class
class CastBarModel : public GUIWidgetModel
{
public:
    CastBarModel( BaseCharacter * pCharacter );
    virtual ~CastBarModel();

    // Model
    inline Bool ShowName() const;
    inline Bool ShowValues() const;

    inline Void SetShowName( Bool bShowName );
    inline Void SetShowValues( Bool bShowValues );

    inline Bool IsCasting() const;
    inline SkillID GetCastingState( Scalar * outCastingTime ) const;

    // Controller
    virtual Void OnClick( const Point2 & ptLocalPos, KeyCode iKey, GUIEventFlag iFlags );

protected:
    BaseCharacter * m_pCharacter;

    Bool m_bShowName;
    Bool m_bShowValues;
};

/////////////////////////////////////////////////////////////////////////////////
// The CastBar class
class CastBar : public GUIWidget
{
public:
    CastBar( CastBarModel * pModel, GUIWidget * pParent, const GUILayout & guiLayout, const GChar * strName );
    virtual ~CastBar();

protected:
    // Drawing interface
    virtual Void _Draw( const Rectangle2 & rectClient );
};

/////////////////////////////////////////////////////////////////////////////////
// Backward Includes (Inlines & Templates)
#include "CastBar.inl"

/////////////////////////////////////////////////////////////////////////////////
// Header end
#endif // SCARAB_ENTRYPOINT_SIMPLERPG_INTERFACE_CASTBAR_H


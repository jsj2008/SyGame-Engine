/////////////////////////////////////////////////////////////////////////////////
// File : EntryPoint/WorldCraft/Gameplay/Items/ItemClasses/EquipmentItems/ArmorItems.h
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : WorldCraft, Gameplay, EquipmentItems : ArmorItems
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
#ifndef SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_EQUIPMENTITEMS_ARMORITEMS_H
#define SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_EQUIPMENTITEMS_ARMORITEMS_H

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "../../ItemTypes.h"

/////////////////////////////////////////////////////////////////////////////////
// Constants definitions

/////////////////////////////////////////////////////////////////////////////////
// The ArmorItem class
class ArmorItem : public EquipmentItem
{
public:
    ArmorItem();
    virtual ~ArmorItem();

    // Getters
    inline StatusEffect * GetOnHitEffect() const;

protected:
    StatusEffect * m_pOnHitEffect;
};

/////////////////////////////////////////////////////////////////////////////////
// The HeadItem class
class HeadItem : public ArmorItem
{
public:
    HeadItem();
    virtual ~HeadItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The ChestItem class
class ChestItem : public ArmorItem
{
public:
    ChestItem();
    virtual ~ChestItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The ShouldersItem class
class ShouldersItem : public ArmorItem
{
public:
    ShouldersItem();
    virtual ~ShouldersItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The ArmsItem class
class ArmsItem : public ArmorItem
{
public:
    ArmsItem();
    virtual ~ArmsItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The WristsItem class
class WristsItem : public ArmorItem
{
public:
    WristsItem();
    virtual ~WristsItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The HandsItem class
class HandsItem : public ArmorItem
{
public:
    HandsItem();
    virtual ~HandsItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The LegsItem class
class LegsItem : public ArmorItem
{
public:
    LegsItem();
    virtual ~LegsItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// The FeetItem class
class FeetItem : public ArmorItem
{
public:
    FeetItem();
    virtual ~FeetItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// Backward Includes (Inlines & Templates)
#include "ArmorItems.inl"

/////////////////////////////////////////////////////////////////////////////////
// Header end
#endif // SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_EQUIPMENTITEMS_ARMORITEMS_H

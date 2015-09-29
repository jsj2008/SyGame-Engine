/////////////////////////////////////////////////////////////////////////////////
// File : EntryPoint/WorldCraft/Gameplay/Items/ItemClasses/ConsumableItems/ProjectileItem.h
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : WorldCraft, Gameplay, ConsumableItems : ProjectileItem
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
#ifndef SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_CONSUMABLEITEMS_PROJECTILEITEM_H
#define SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_CONSUMABLEITEMS_PROJECTILEITEM_H

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "../../ItemTypes.h"

/////////////////////////////////////////////////////////////////////////////////
// Constants definitions

/////////////////////////////////////////////////////////////////////////////////
// The ProjectileItem class
class ProjectileItem : public ConsumableItem
{
public:
    ProjectileItem();
    virtual ~ProjectileItem();

protected:

};

/////////////////////////////////////////////////////////////////////////////////
// Backward Includes (Inlines & Templates)
#include "ProjectileItem.inl"

/////////////////////////////////////////////////////////////////////////////////
// Header end
#endif // SCARAB_ENTRYPOINT_WORLDCRAFT_GAMEPLAY_ITEMS_ITEMCLASSES_CONSUMABLEITEMS_PROJECTILEITEM_H

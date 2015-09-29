/////////////////////////////////////////////////////////////////////////////////
// File : Engine/Console/GlobalCommands/CommandVarDel.h
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Commands : Global, VarDel
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
#ifndef SCARAB_ENGINE_CONSOLE_GLOBALCOMMANDS_COMMANDVARDEL_H
#define SCARAB_ENGINE_CONSOLE_GLOBALCOMMANDS_COMMANDVARDEL_H

/////////////////////////////////////////////////////////////////////////////////
// Includes
#include "../ConsoleCommand.h"

/////////////////////////////////////////////////////////////////////////////////
// Constants definitions

/////////////////////////////////////////////////////////////////////////////////
// The CommandVarDel class
class CommandVarDel : public ConsoleCommand
{
public:
    CommandVarDel();
    virtual ~CommandVarDel();

    // Informations
    virtual GChar * GetHelp( GChar * strOutput ) const;

    // Execution
    virtual Bool Execute( GChar * strOutput, const GChar * strArgList );
};

/////////////////////////////////////////////////////////////////////////////////
// Backward Includes (Inlines & Templates)
#include "CommandVarDel.inl"

/////////////////////////////////////////////////////////////////////////////////
// Header end
#endif // SCARAB_ENGINE_CONSOLE_GLOBALCOMMANDS_COMMANDVARDEL_H

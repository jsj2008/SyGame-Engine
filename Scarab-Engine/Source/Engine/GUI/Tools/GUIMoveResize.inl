/////////////////////////////////////////////////////////////////////////////////
// File : Engine/GUI/Tools/GUIMoveResize.inl
/////////////////////////////////////////////////////////////////////////////////
// Version : 1.0a
// Began Code : 29/05/2010
// Status : Alpha
// Portability : Any
/////////////////////////////////////////////////////////////////////////////////
// Description : Window Moving & Sizing state management
/////////////////////////////////////////////////////////////////////////////////
// Part of Scarab-Engine, licensed under the
// Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License
//   http://creativecommons.org/licenses/by-nc-nd/3.0/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// Known Bugs : None.
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// GUIMoveResize implementation
inline Bool GUIMoveResize::IsActive() const {
    return ( m_pWindow != NULL );
}
inline GUIWindow * GUIMoveResize::GetWindow() const {
    return m_pWindow;
}

inline Bool GUIMoveResize::IsMoving() const {
    return m_bIsMoving;
}

inline Bool GUIMoveResize::IsResizing() const {
    return m_bIsResizing;
}
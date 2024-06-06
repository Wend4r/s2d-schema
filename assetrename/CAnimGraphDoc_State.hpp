#pragma once

#include <cstdint>

struct AnimStateID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Animation State"
// MPropertyExtendedEditor
class CAnimGraphDoc_State
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_StateTransition > > m_transitions; // 0x28	
	// MPropertyHideField
	CUtlVector< CStateAction > m_actions; // 0x40	
	// MPropertyFriendlyName "Name"
	// MPropertySortPriority "100"
	CUtlString m_name; // 0x58	
	// MPropertyFriendlyName "Comment"
	// MPropertyAttributeEditor "TextBlock()"
	// MPropertySortPriority "-100"
	CUtlString m_sComment; // 0x60	
	// MPropertyHideField
	AnimStateID m_stateID; // 0x68	
	// MPropertyHideField
	Vector2D m_position; // 0x6c	
	// MPropertyFriendlyName "Start State"
	bool m_bIsStartState; // 0x74	
	// MPropertyFriendlyName "End State"
	bool m_bIsEndtState; // 0x75	
	// MPropertyFriendlyName "Show Input To Graph"
	bool m_bIsInputToGraph; // 0x76	
	// MPropertyFriendlyName "Passthrough"
	bool m_bIsPassthrough; // 0x77	
};


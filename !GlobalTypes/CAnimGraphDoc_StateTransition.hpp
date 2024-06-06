#pragma once

#include <cstdint>

struct CAnimGraphDoc_ConditionContainer;
struct AnimStateID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transition"
// MPropertyExtendedEditor
class CAnimGraphDoc_StateTransition
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertySuppressField
	CAnimGraphDoc_ConditionContainer m_conditionList; // 0x28	
	// MPropertyHideField
	AnimStateID m_srcState; // 0x58	
	// MPropertyHideField
	AnimStateID m_destState; // 0x5c	
	// MPropertyFriendlyName "Comment"
	// MPropertyAttributeEditor "TextBlock()"
	// MPropertySortPriority "-100"
	CUtlString m_sComment; // 0x60	
	// MPropertyFriendlyName "Disable"
	bool m_bDisabled; // 0x68	
};


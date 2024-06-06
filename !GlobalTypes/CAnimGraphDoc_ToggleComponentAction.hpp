#pragma once

#include <cstdint>

struct AnimComponentID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ToggleComponentAction : public CAnimGraphDoc_Action
{
public:
	// MPropertyFriendlyName "Component"
	// MPropertyAttributeChoiceName "Component"
	AnimComponentID m_componentID; // 0x28	
	// MPropertyFriendlyName "Set Enabled"
	bool m_bSetEnabled; // 0x2c	
};


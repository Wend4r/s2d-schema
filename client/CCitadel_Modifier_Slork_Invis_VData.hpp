#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Slork_Invis_VData : public CCitadel_Modifier_InvisVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x8a8	
	CEmbeddedSubclass< CCitadelModifier > m_VisibleModifier; // 0x8b8	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x618
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x5e0	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // 0x600	
	// MPropertyStartGroup "Gameplay"
	float m_flTraceLengthMin; // 0x610	
};


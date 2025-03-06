#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x690
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_VeilWalkerWatcherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerTriggeredModifier; // 0x668	
	CEmbeddedSubclass< CCitadelModifier > m_VeilWalkerMovespeed; // 0x678	
	// MPropertyStartGroup "Gameplay"
	float m_flTraceLengthMin; // 0x688	
};


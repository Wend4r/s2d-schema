#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x15b0	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x15c0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x15f8	
};


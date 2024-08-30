#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x1500	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x1510	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x1520	
};


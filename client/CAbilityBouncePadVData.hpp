#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1528
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityBouncePadVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BounceModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_AllyBounceModifier; // 0x14f8	
	CEmbeddedSubclass< CCitadelModifier > m_SpeedOnLandModifier; // 0x1508	
	CEmbeddedSubclass< CCitadelModifier > m_NoBounceModifier; // 0x1518	
};


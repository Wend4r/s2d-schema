#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDustStormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DustStormAura; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x14f0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDustStormVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DustStormAura; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x14f8	
};


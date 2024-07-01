#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Mirage_Tornado_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TornadoAura; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // 0x14f0	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityAstroRifleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15e8	
};


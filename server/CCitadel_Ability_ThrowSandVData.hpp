#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ThrowSandVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SandDebuff; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceDebuff; // 0x15d8	
};


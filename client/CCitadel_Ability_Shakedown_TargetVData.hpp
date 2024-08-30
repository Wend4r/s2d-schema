#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Shakedown_TargetVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_PulseModifier; // 0x1500	
};


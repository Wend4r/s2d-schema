#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PuddleVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PuddleModifier; // 0x14f0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1500
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceDomeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_IceDomeModifier; // 0x14f0	
};


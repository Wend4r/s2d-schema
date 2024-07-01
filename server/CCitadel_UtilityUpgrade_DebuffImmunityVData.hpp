#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_DebuffImmunityVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffImmunityModifier; // 0x1528	
};


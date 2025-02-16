#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // 0x1590	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x15a0	
	// MPropertyStartGroup "Misc"
	CUtlString m_strDebuffStatName; // 0x15b0	
};


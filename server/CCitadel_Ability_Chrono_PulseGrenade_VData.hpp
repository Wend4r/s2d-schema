#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // 0x14e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x14f8	
	// MPropertyStartGroup "Misc"
	CUtlString m_strDebuffStatName; // 0x1508	
};


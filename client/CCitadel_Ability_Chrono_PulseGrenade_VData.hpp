#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1518
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strHitSound; // 0x1500	
	// MPropertyStartGroup "Misc"
	CUtlString m_strDebuffStatName; // 0x1510	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x1798	
	CSoundEventName m_strReturnSound; // 0x17a8	
	CSoundEventName m_strCatchSound; // 0x17b8	
	CSoundEventName m_strFailSound; // 0x17c8	
	CSoundEventName m_strHitSound; // 0x17d8	
};


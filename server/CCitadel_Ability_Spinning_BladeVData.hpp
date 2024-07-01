#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x15d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x16b0	
	CSoundEventName m_strReturnSound; // 0x16c0	
	CSoundEventName m_strCatchSound; // 0x16d0	
	CSoundEventName m_strFailSound; // 0x16e0	
	CSoundEventName m_strHitSound; // 0x16f0	
};


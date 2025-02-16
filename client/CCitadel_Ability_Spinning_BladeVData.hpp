#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1590	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x15a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x1680	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x1760	
	CSoundEventName m_strReturnSound; // 0x1770	
	CSoundEventName m_strCatchSound; // 0x1780	
	CSoundEventName m_strFailSound; // 0x1790	
	CSoundEventName m_strHitSound; // 0x17a0	
};


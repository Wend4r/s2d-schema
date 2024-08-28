#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1708
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Spinning_BladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x14e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchIndicator; // 0x14f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CatchParticle; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strThrowSound; // 0x16b8	
	CSoundEventName m_strReturnSound; // 0x16c8	
	CSoundEventName m_strCatchSound; // 0x16d8	
	CSoundEventName m_strFailSound; // 0x16e8	
	CSoundEventName m_strHitSound; // 0x16f8	
};


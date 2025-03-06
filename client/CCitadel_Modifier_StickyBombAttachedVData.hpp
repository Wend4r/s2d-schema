#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa20
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x818	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedVictimTeamParticle; // 0x8f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x9d8	
	CSoundEventName m_strTickTockSound; // 0x9e8	
	CSoundEventName m_strTickTockFastSound; // 0x9f8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0xa08	
	float m_DetonateWarningTime; // 0xa18	
};


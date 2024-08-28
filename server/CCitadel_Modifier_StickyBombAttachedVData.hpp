#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // 0x6d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x7b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedVictimTeamParticle; // 0x898	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x978	
	CSoundEventName m_strTickTockSound; // 0x988	
	CSoundEventName m_strTickTockFastSound; // 0x998	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x9a8	
	float m_DetonateWarningTime; // 0x9b8	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StickyBombAttachedVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BombAttachedParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunAttachedParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x7a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x880	
	CSoundEventName m_strTickTockSound; // 0x890	
	CSoundEventName m_strTickTockFastSound; // 0x8a0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x8b0	
	float m_DetonateWarningTime; // 0x8c0	
};


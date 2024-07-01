#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_InvisVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // 0x6c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x7a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strInvisRevealedSound; // 0x880	
	// MPropertyStartGroup "Behavior"
	bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x890	
	bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x891	
	// MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
	bool m_bFadeToVisibleAtEndOfDuration; // 0x892	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_InvisVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisLoopParticle; // 0x658	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisDetectRadiusParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisRevealedParticle; // 0x818	
	float m_flDesatFactor; // 0x8f8	
private:
	[[maybe_unused]] uint8_t __pad08fc[0x4]; // 0x8fc
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strInvisRevealedSound; // 0x900	
	// MPropertyStartGroup "Behavior"
	bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x910	
	bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x911	
	bool m_bBreakOnItemUse; // 0x912	
	// MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
	bool m_bFadeToVisibleAtEndOfDuration; // 0x913	
	float m_flMinCloak; // 0x914	
	float m_flMaxCloak; // 0x918	
};


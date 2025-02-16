#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x778
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HookTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "GamePlay"
	// MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
	float m_flApproachingWhooshAnticipationTime; // 0x638	
	float m_flCloseEnoughDistance; // 0x63c	
	float m_flTossUpSpeed; // 0x640	
	float m_flReturnDelay; // 0x644	
	float m_flReturnDelayAlly; // 0x648	
	float m_flReturnSpeed; // 0x64c	
	float m_flReturnSpeedNonHero; // 0x650	
	float m_flReturnPositionForwardOffset; // 0x654	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // 0x668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRetractSound; // 0x748	
	CSoundEventName m_strRetractSoundEnd; // 0x758	
	CSoundEventName m_strApproachingWhooshSound; // 0x768	
};


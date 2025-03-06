#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x798
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HookTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "GamePlay"
	// MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
	float m_flApproachingWhooshAnticipationTime; // 0x658	
	float m_flCloseEnoughDistance; // 0x65c	
	float m_flTossUpSpeed; // 0x660	
	float m_flReturnDelay; // 0x664	
	float m_flReturnDelayAlly; // 0x668	
	float m_flReturnSpeed; // 0x66c	
	float m_flReturnSpeedNonHero; // 0x670	
	float m_flReturnPositionForwardOffset; // 0x674	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x678	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // 0x688	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRetractSound; // 0x768	
	CSoundEventName m_strRetractSoundEnd; // 0x778	
	CSoundEventName m_strApproachingWhooshSound; // 0x788	
};


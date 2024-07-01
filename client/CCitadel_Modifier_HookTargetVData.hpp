#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_HookTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
	float m_flApproachingWhooshAnticipationTime; // 0x5e0	
	float m_flCloseEnoughDistance; // 0x5e4	
	float m_flTossUpSpeed; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x5f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HookRetrieveParticle; // 0x600	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strRetractSound; // 0x6e0	
	CSoundEventName m_strRetractSoundEnd; // 0x6f0	
	CSoundEventName m_strApproachingWhooshSound; // 0x700	
};


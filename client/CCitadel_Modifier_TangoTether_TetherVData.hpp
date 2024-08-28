#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x5f8	
	CSoundEventName m_HealSound; // 0x608	
	CSoundEventName m_HitIndicator; // 0x618	
	CSoundEventName m_GrappleHitSound; // 0x628	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x638	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // 0x648	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // 0x668	
	// MPropertyStartGroup "Gameplay"
	float m_flMinConnectTime; // 0x678	
	float m_flDisconnectDistanceBuffer; // 0x67c	
	float m_flCandidateCloserDistance; // 0x680	
	float m_flTargetAwayDistance; // 0x684	
};


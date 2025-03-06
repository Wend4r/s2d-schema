#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_TetherSound; // 0x658	
	CSoundEventName m_HealSound; // 0x668	
	CSoundEventName m_HitIndicator; // 0x678	
	CSoundEventName m_GrappleHitSound; // 0x688	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x698	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // 0x6a8	
	CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // 0x6b8	
	CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // 0x6c8	
	// MPropertyStartGroup "Gameplay"
	float m_flMinConnectTime; // 0x6d8	
	float m_flDisconnectDistanceBuffer; // 0x6dc	
	float m_flCandidateCloserDistance; // 0x6e0	
	float m_flTargetAwayDistance; // 0x6e4	
};


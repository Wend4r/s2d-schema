#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x5e0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x610	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x620	
	CSoundEventName m_AmbientLoopingSound; // 0x630	
	CSoundEventName m_GrabSound; // 0x640	
	CSoundEventName m_ThrowSound; // 0x650	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x600	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x610	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x620	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x630	
	CSoundEventName m_AmbientLoopingSound; // 0x640	
	CSoundEventName m_GrabSound; // 0x650	
	CSoundEventName m_ThrowSound; // 0x660	
};


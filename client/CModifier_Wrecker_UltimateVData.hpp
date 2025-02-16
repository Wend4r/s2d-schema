#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x638	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x648	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x658	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x668	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x678	
	CSoundEventName m_AmbientLoopingSound; // 0x688	
	CSoundEventName m_GrabSound; // 0x698	
	CSoundEventName m_ThrowSound; // 0x6a8	
};


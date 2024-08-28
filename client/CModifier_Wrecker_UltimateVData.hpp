#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // 0x5f8	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // 0x628	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StartSound; // 0x638	
	CSoundEventName m_AmbientLoopingSound; // 0x648	
	CSoundEventName m_GrabSound; // 0x658	
	CSoundEventName m_ThrowSound; // 0x668	
};


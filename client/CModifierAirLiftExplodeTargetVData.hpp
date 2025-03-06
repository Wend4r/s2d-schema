#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x698
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftExplodeTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x658	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x668	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x678	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x688	
};


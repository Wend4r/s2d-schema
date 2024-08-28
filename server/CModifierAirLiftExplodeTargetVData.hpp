#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirLiftExplodeTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strSilenceTargetSound; // 0x5f8	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x608	
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x618	
	CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // 0x628	
};


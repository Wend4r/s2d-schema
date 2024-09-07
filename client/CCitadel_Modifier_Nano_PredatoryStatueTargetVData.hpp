#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserHitSound; // 0x5f8	
	CSoundEventName m_strLaserStartSound; // 0x608	
	CSoundEventName m_strLaserLoopSound; // 0x618	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x628	
};


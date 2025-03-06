#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x698
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserHitSound; // 0x658	
	CSoundEventName m_strLaserStartSound; // 0x668	
	CSoundEventName m_strLaserLoopSound; // 0x678	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x688	
};


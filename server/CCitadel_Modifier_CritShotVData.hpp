#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x738
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CritShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x718	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CritSound; // 0x728	
};


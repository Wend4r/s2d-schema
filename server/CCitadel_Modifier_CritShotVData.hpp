#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_CritShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x710	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_CritSound; // 0x720	
};


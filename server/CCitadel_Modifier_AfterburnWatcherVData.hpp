#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_AfterburnWatcherVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AfterburnDotModifier; // 0x628	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // 0x638	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x648	
};


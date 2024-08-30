#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1558
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechCleaveVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TechCleaveModifier; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sCleaveProcSound; // 0x1548	
};


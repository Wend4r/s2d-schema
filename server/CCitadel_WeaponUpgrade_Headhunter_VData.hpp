#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1568
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_Headhunter_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HeadshotBuffModifier; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HeadShotVictimSound; // 0x1548	
	CSoundEventName m_HeadShotConfirmationSound; // 0x1558	
};


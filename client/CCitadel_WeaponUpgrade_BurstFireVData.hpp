#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_BurstFireVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ActivationSound; // 0x1528	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1538	
};


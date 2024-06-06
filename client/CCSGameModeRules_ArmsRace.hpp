#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "CUtlString m_WeaponSequence"
class CCSGameModeRules_ArmsRace : public CCSGameModeRules
{
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlString > m_WeaponSequence; // 0x38	
};


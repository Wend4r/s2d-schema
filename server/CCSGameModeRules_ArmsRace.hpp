#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MNetworkVarNames "CUtlString m_WeaponSequence"
class CCSGameModeRules_ArmsRace : public CCSGameModeRules
{
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlString > m_WeaponSequence; // 0x30	
};


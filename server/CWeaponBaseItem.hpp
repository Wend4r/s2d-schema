#pragma once

#include <cstdint>

struct CountdownTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf78
// Has VTable
// 
// MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
// MNetworkVarNames "bool m_bRedraw"
class CWeaponBaseItem : public CCSWeaponBase
{
public:
	// MNetworkEnable
	CountdownTimer m_SequenceCompleteTimer; // 0xf58	
	// MNetworkEnable
	bool m_bRedraw; // 0xf70	
};


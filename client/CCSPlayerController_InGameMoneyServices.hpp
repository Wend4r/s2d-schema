#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MNetworkVarNames "int m_iAccount"
// MNetworkVarNames "int m_iStartAccount"
// MNetworkVarNames "int m_iTotalCashSpent"
// MNetworkVarNames "int m_iCashSpentThisRound"
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	int32_t m_iAccount; // 0x40	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x44	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x48	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x4c	
};


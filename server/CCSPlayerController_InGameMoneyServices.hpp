#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "int m_iAccount"
// MNetworkVarNames "int m_iStartAccount"
// MNetworkVarNames "int m_iTotalCashSpent"
// MNetworkVarNames "int m_iCashSpentThisRound"
class CCSPlayerController_InGameMoneyServices : public CPlayerControllerComponent
{
public:
	bool m_bReceivesMoneyNextRound; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	int32_t m_iMoneyEarnedForNextRound; // 0x44	
	// MNetworkEnable
	int32_t m_iAccount; // 0x48	
	// MNetworkEnable
	int32_t m_iStartAccount; // 0x4c	
	// MNetworkEnable
	int32_t m_iTotalCashSpent; // 0x50	
	// MNetworkEnable
	int32_t m_iCashSpentThisRound; // 0x54	
};


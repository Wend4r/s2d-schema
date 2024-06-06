#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MNetworkVarNames "int m_nMatchSeed"
// MNetworkVarNames "bool m_bBlockersPresent"
// MNetworkVarNames "bool m_bRoundInProgress"
// MNetworkVarNames "int m_iFirstSecondHalfRound"
// MNetworkVarNames "int m_iBombSite"
class C_RetakeGameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xf8]; // 0x0
public:
	// MNetworkEnable
	int32_t m_nMatchSeed; // 0xf8	
	// MNetworkEnable
	bool m_bBlockersPresent; // 0xfc	
	// MNetworkEnable
	bool m_bRoundInProgress; // 0xfd	
private:
	[[maybe_unused]] uint8_t __pad00fe[0x2]; // 0xfe
public:
	// MNetworkEnable
	int32_t m_iFirstSecondHalfRound; // 0x100	
	// MNetworkEnable
	int32_t m_iBombSite; // 0x104	
};


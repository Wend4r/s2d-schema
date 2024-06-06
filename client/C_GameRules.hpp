#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MNetworkVarNames "int m_nTotalPausedTicks"
// MNetworkVarNames "int m_nPauseStartTick"
// MNetworkVarNames "bool m_bGamePaused"
class C_GameRules
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	// MNetworkEnable
	int32_t m_nTotalPausedTicks; // 0x30	
	// MNetworkEnable
	int32_t m_nPauseStartTick; // 0x34	
	// MNetworkEnable
	bool m_bGamePaused; // 0x38	
};


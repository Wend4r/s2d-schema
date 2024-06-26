#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1a80
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class C_Fists : public C_CSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0x1a70	
private:
	[[maybe_unused]] uint8_t __pad1a71[0x3]; // 0x1a71
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0x1a74	
};


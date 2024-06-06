#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xeb0
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0e99[0x3]; // 0xe99
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xe9c	
	bool m_bRestorePrevWep; // 0xea0	
private:
	[[maybe_unused]] uint8_t __pad0ea1[0x3]; // 0xea1
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xea4	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xea8	
	bool m_bDelayedHardPunchIncoming; // 0xeac	
	bool m_bDestroyAfterTaunt; // 0xead	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf70
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f59[0x3]; // 0xf59
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xf5c	
	bool m_bRestorePrevWep; // 0xf60	
private:
	[[maybe_unused]] uint8_t __pad0f61[0x3]; // 0xf61
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xf64	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xf68	
	bool m_bDelayedHardPunchIncoming; // 0xf6c	
	bool m_bDestroyAfterTaunt; // 0xf6d	
};


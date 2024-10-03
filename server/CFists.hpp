#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf28
// Has VTable
// 
// MNetworkVarNames "bool m_bPlayingUninterruptableAct"
// MNetworkVarNames "PlayerAnimEvent_t m_nUninterruptableActivity"
class CFists : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bPlayingUninterruptableAct; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x3]; // 0xf11
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnUninterruptChanged"
	PlayerAnimEvent_t m_nUninterruptableActivity; // 0xf14	
	bool m_bRestorePrevWep; // 0xf18	
private:
	[[maybe_unused]] uint8_t __pad0f19[0x3]; // 0xf19
public:
	CHandle< CBasePlayerWeapon > m_hWeaponBeforePrevious; // 0xf1c	
	CHandle< CBasePlayerWeapon > m_hWeaponPrevious; // 0xf20	
	bool m_bDelayedHardPunchIncoming; // 0xf24	
	bool m_bDestroyAfterTaunt; // 0xf25	
};


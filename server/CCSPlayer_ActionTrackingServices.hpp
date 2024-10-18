#pragma once

#include <cstdint>

struct WeaponPurchaseTracker_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2e8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x1c0]; // 0x40
public:
	CHandle< CBasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // 0x200	
private:
	[[maybe_unused]] uint8_t __pad0204[0x28]; // 0x204
public:
	// MNetworkEnable
	bool m_bIsRescuing; // 0x22c	
private:
	[[maybe_unused]] uint8_t __pad022d[0x3]; // 0x22d
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x230	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x288	
};


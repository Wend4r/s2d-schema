#pragma once

#include <cstdint>

struct WeaponPurchaseTracker_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsRescuing"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
// MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:
	CHandle< C_BasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // 0x40	
	// MNetworkEnable
	bool m_bIsRescuing; // 0x44	
private:
	[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
public:
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x48	
	// MNetworkEnable
	WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xa0	
};


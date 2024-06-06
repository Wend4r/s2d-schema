#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1370
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextAttack"
// MNetworkVarNames "bool m_bIsLookingAtWeapon"
// MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
private:
	[[maybe_unused]] uint8_t __pad00a0[0x18]; // 0xa0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xb8	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xbc	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xbd	
private:
	[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
public:
	uint32_t m_nOldShootPositionHistoryCount; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x394]; // 0xc4
public:
	uint32_t m_nOldInputHistoryCount; // 0x458	
};


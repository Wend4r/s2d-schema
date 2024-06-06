#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1380
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextAttack"
// MNetworkVarNames "bool m_bIsLookingAtWeapon"
// MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
class CCSPlayer_WeaponServices : public CPlayer_WeaponServices
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flNextAttack; // 0xa8	
	// MNetworkEnable
	bool m_bIsLookingAtWeapon; // 0xac	
	// MNetworkEnable
	bool m_bIsHoldingLookAtWeapon; // 0xad	
private:
	[[maybe_unused]] uint8_t __pad00ae[0x2]; // 0xae
public:
	CHandle< CBasePlayerWeapon > m_hSavedWeapon; // 0xb0	
	int32_t m_nTimeToMelee; // 0xb4	
	int32_t m_nTimeToSecondary; // 0xb8	
	int32_t m_nTimeToPrimary; // 0xbc	
	int32_t m_nTimeToSniperRifle; // 0xc0	
	bool m_bIsBeingGivenItem; // 0xc4	
	bool m_bIsPickingUpItemWithUse; // 0xc5	
	bool m_bPickedUpWeapon; // 0xc6	
	bool m_bDisableAutoDeploy; // 0xc7	
	bool m_bIsPickingUpGroundWeapon; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	uint32_t m_nOldShootPositionHistoryCount; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x398]; // 0xd0
public:
	uint32_t m_nOldInputHistoryCount; // 0x468	
};


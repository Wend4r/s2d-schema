#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
// MNetworkVarNames "int32 m_iClip"
// MNetworkVarNames "int32 m_iBonusClip"
// MNetworkVarNames "float m_flSpreadPenalty"
// MNetworkVarNames "GameTime_t m_flZoomTime"
// MNetworkVarNames "GameTime_t m_flZoomOutTime"
// MNetworkVarNames "int8 m_iSpreadIndex"
// MNetworkVarNames "int16 m_nShotRecoilIndex"
// MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
// MNetworkVarNames "bool m_bIsZoomed"
// MNetworkVarNames "uint8 m_nBurstShotsRemaining"
// MNetworkVarNames "uint32 m_nShotNumber"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
// MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
// MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
// MNetworkVarNames "bool m_bCanActiveReload"
// MNetworkVarNames "GameTime_t m_flLastAttackTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
// MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
// MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
// MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
// MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
// MNetworkVarNames "bool m_bInputPressedWhileSelected"
// MNetworkVarNames "EFireMode_t m_eActiveFireMode"
class CCitadel_Ability_PrimaryWeapon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c69[0x1]; // 0xc69
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xc6a	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xc6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xc71	
private:
	[[maybe_unused]] uint8_t __pad0c72[0x2]; // 0xc72
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint32_t m_nShotNumber; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInReload; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xc79	
private:
	[[maybe_unused]] uint8_t __pad0c7a[0x2]; // 0xc7a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xc7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xc80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanActiveReload; // 0xc84	
private:
	[[maybe_unused]] uint8_t __pad0c85[0x3]; // 0xc85
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xc88	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xc8c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xc90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xc94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xc9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x3]; // 0xca1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xca4	
	QAngle m_angRecoilAngles; // 0xca8	
	QAngle m_angRecoilToAdd; // 0xcb4	
	QAngle m_angRecoilRecovery; // 0xcc0	
	GameTime_t m_flRecoilStartTime; // 0xccc	
	float m_flRecoilRecoverySpeed; // 0xcd0	
	float m_flAddApproachSpeed; // 0xcd4	
	bool m_bFireBackwards; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	float m_currentSpread; // 0xcdc	
	float m_currentMaxSpread; // 0xce0	
	float m_currentFireSpread; // 0xce4	
	float m_flCurrentSpinRate; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0x4]; // 0xcec
public:
	float m_fFireDuration; // 0xcf0	
private:
	[[maybe_unused]] uint8_t __pad0cf4[0x1]; // 0xcf4
public:
	bool m_bFireOnEmpty; // 0xcf5	
private:
	[[maybe_unused]] uint8_t __pad0cf6[0x2]; // 0xcf6
public:
	GameTime_t m_flNextDisarmSound; // 0xcf8	
};


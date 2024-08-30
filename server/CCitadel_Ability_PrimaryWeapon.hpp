#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
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
class CCitadel_Ability_PrimaryWeapon : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextPrimaryAttack; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xadc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xae4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xae8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xaec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af1[0x1]; // 0xaf1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xaf2	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xaf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xaf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0afa[0x2]; // 0xafa
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	uint32_t m_nShotNumber; // 0xafc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInReload; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xb01	
private:
	[[maybe_unused]] uint8_t __pad0b02[0x2]; // 0xb02
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xb08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCanActiveReload; // 0xb0c	
private:
	[[maybe_unused]] uint8_t __pad0b0d[0x3]; // 0xb0d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xb10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xb14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xb1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xb20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b29[0x3]; // 0xb29
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xb2c	
	QAngle m_angRecoilAngles; // 0xb30	
	QAngle m_angRecoilToAdd; // 0xb3c	
	QAngle m_angRecoilRecovery; // 0xb48	
	GameTime_t m_flRecoilStartTime; // 0xb54	
	float m_flRecoilRecoverySpeed; // 0xb58	
	float m_flAddApproachSpeed; // 0xb5c	
	bool m_bFireBackwards; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b61[0x3]; // 0xb61
public:
	float m_currentSpread; // 0xb64	
	float m_currentMaxSpread; // 0xb68	
	float m_currentFireSpread; // 0xb6c	
	float m_flCurrentSpinRate; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
public:
	float m_fFireDuration; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b7c[0x1]; // 0xb7c
public:
	bool m_bFireOnEmpty; // 0xb7d	
private:
	[[maybe_unused]] uint8_t __pad0b7e[0x2]; // 0xb7e
public:
	GameTime_t m_flNextDisarmSound; // 0xb80	
	int32_t m_nClipSizeBeforeSwap; // 0xb84	
};


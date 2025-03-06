#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
// MNetworkVarNames "int32 m_iClip"
// MNetworkVarNames "int32 m_iBonusClip"
// MNetworkVarNames "int32 m_nNumContinuousShots"
// MNetworkVarNames "GameTime_t m_flContinuousShotStartTime"
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
	GameTime_t m_flNextPrimaryAttack; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip; // 0xb04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iBonusClip; // 0xb08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	// MNetworkPriority "32"
	int32_t m_nNumContinuousShots; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flContinuousShotStartTime; // 0xb10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpreadPenalty; // 0xb14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomTime; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flZoomOutTime; // 0xb1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int8_t m_iSpreadIndex; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b21[0x1]; // 0xb21
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int16_t m_nShotRecoilIndex; // 0xb22	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_flNextShotRecoilRecoveryTime; // 0xb24	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsZoomed; // 0xb28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint8_t m_nBurstShotsRemaining; // 0xb29	
private:
	[[maybe_unused]] uint8_t __pad0b2a[0x2]; // 0xb2a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	uint32_t m_nShotNumber; // 0xb2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInReload; // 0xb30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSingleShotReloadFirstBullet; // 0xb31	
private:
	[[maybe_unused]] uint8_t __pad0b32[0x2]; // 0xb32
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	GameTime_t m_reloadQueuedStartTime; // 0xb34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flReloadAvailableTime; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanActiveReload; // 0xb3c	
private:
	[[maybe_unused]] uint8_t __pad0b3d[0x3]; // 0xb3d
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flLastAttackTime; // 0xb40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayStartTime; // 0xb44	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextAttackDelayEndTime; // 0xb48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flAttackDelayPauseTotalTime; // 0xb4c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flAttackDelayPauseEndTime; // 0xb50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xb54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInputPressedWhileSelected; // 0xb58	
private:
	[[maybe_unused]] uint8_t __pad0b59[0x3]; // 0xb59
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	EFireMode_t m_eActiveFireMode; // 0xb5c	
	QAngle m_angRecoilAngles; // 0xb60	
	QAngle m_angRecoilToAdd; // 0xb6c	
	QAngle m_angRecoilRecovery; // 0xb78	
	GameTime_t m_flRecoilStartTime; // 0xb84	
	float m_flRecoilRecoverySpeed; // 0xb88	
	float m_flAddApproachSpeed; // 0xb8c	
	bool m_bFireBackwards; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b91[0x3]; // 0xb91
public:
	float m_currentSpread; // 0xb94	
	float m_currentMaxSpread; // 0xb98	
	float m_currentFireSpread; // 0xb9c	
	float m_flCurrentSpinRate; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0ba4[0x4]; // 0xba4
public:
	float m_fFireDuration; // 0xba8	
private:
	[[maybe_unused]] uint8_t __pad0bac[0x1]; // 0xbac
public:
	bool m_bFireOnEmpty; // 0xbad	
	bool m_bHasReleasedForSemiAuto; // 0xbae	
private:
	[[maybe_unused]] uint8_t __pad0baf[0x1]; // 0xbaf
public:
	GameTime_t m_flNextDisarmSound; // 0xbb0	
	int32_t m_nClipSizeBeforeSwap; // 0xbb4	
};


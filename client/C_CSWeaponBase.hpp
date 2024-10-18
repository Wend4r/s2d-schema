#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct C_IronSightController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b10
// Has VTable
// 
// MNetworkExcludeByName "m_flTimeWeaponIdle"
// MNetworkVarNames "float m_flFireSequenceStartTime"
// MNetworkVarNames "int m_nFireSequenceStartTimeChange"
// MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
// MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
// MNetworkVarNames "CSWeaponState_t m_iState"
// MNetworkVarNames "uint32 m_nViewModelIndex"
// MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
// MNetworkVarNames "CSWeaponMode m_weaponMode"
// MNetworkVarNames "float m_fAccuracyPenalty"
// MNetworkVarNames "int m_iRecoilIndex"
// MNetworkVarNames "float m_flRecoilIndex"
// MNetworkVarNames "bool m_bBurstMode"
// MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
// MNetworkVarNames "float m_flPostponeFireReadyFrac"
// MNetworkVarNames "bool m_bInReload"
// MNetworkVarNames "bool m_bReloadVisuallyComplete"
// MNetworkVarNames "GameTime_t m_flDroppedAtTime"
// MNetworkVarNames "bool m_bIsHauledBack"
// MNetworkVarNames "bool m_bSilencerOn"
// MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
// MNetworkVarNames "int m_iOriginalTeamNumber"
// MNetworkVarNames "int m_iMostRecentTeamNumber"
// MNetworkVarNames "bool m_bDroppedNearBuyZone"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
// MNetworkVarNames "GameTick_t m_nDropTick"
// MNetworkVarNames "GameTime_t m_fLastShotTime"
// MNetworkVarNames "int m_iIronSightMode"
// MNetworkVarNames "int m_iNumEmptyAttacks"
class C_CSWeaponBase : public C_BasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad16a0[0x3c]; // 0x16a0
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0x16dc	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0x16e0	
	int32_t m_nFireSequenceStartTimeAck; // 0x16e4	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0x16e8	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x16ec	
	HSequence m_seqIdle; // 0x16f0	
	HSequence m_seqFirePrimary; // 0x16f4	
	HSequence m_seqFireSecondary; // 0x16f8	
private:
	[[maybe_unused]] uint8_t __pad16fc[0x4]; // 0x16fc
public:
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0x1700	
	HSequence m_hCurrentThirdPersonSequence; // 0x1718	
	int32_t m_nSilencerBoneIndex; // 0x171c	
	HSequence m_thirdPersonSequences[7]; // 0x1720	
private:
	[[maybe_unused]] uint8_t __pad173c[0x1c]; // 0x173c
public:
	CSWeaponState_t m_ClientPreviousWeaponState; // 0x1758	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0x175c	
	float m_flCrosshairDistance; // 0x1760	
	int32_t m_iAmmoLastCheck; // 0x1764	
	int32_t m_iAlpha; // 0x1768	
	int32_t m_iScopeTextureID; // 0x176c	
	int32_t m_iCrosshairTextureID; // 0x1770	
	float m_flGunAccuracyPositionDeprecated; // 0x1774	
	int32_t m_nLastEmptySoundCmdNum; // 0x1778	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x177c	
	bool m_bReloadsWithClips; // 0x1780	
private:
	[[maybe_unused]] uint8_t __pad1781[0x3]; // 0x1781
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0x1784	
	bool m_bFireOnEmpty; // 0x1788	
private:
	[[maybe_unused]] uint8_t __pad1789[0x7]; // 0x1789
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x1790	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0x17b8	
	float m_flTurningInaccuracyDelta; // 0x17bc	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0x17c0	
	float m_flTurningInaccuracy; // 0x17cc	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0x17d0	
	GameTime_t m_flLastAccuracyUpdateTime; // 0x17d4	
	float m_fAccuracySmoothedForZoom; // 0x17d8	
	GameTime_t m_fScopeZoomEndTime; // 0x17dc	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0x17e0	
	// MNetworkEnable
	float m_flRecoilIndex; // 0x17e4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0x17e8	
private:
	[[maybe_unused]] uint8_t __pad17e9[0x3]; // 0x17e9
public:
	GameTime_t m_flLastBurstModeChangeTime; // 0x17ec	
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0x17f0	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0x17f4	
	// MNetworkEnable
	bool m_bInReload; // 0x17f8	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0x17f9	
private:
	[[maybe_unused]] uint8_t __pad17fa[0x2]; // 0x17fa
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0x17fc	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0x1800	
	// MNetworkEnable
	bool m_bSilencerOn; // 0x1801	
private:
	[[maybe_unused]] uint8_t __pad1802[0x2]; // 0x1802
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0x1804	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0x1808	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0x180c	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0x1810	
private:
	[[maybe_unused]] uint8_t __pad1811[0x3]; // 0x1811
public:
	float m_flNextAttackRenderTimeOffset; // 0x1814	
private:
	[[maybe_unused]] uint8_t __pad1818[0x98]; // 0x1818
public:
	bool m_bClearWeaponIdentifyingUGC; // 0x18b0	
	bool m_bVisualsDataSet; // 0x18b1	
	bool m_bOldFirstPersonSpectatedState; // 0x18b2	
	bool m_bUIWeapon; // 0x18b3	
	int32_t m_nCustomEconReloadEventId; // 0x18b4	
private:
	[[maybe_unused]] uint8_t __pad18b8[0x8]; // 0x18b8
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPrevOwner; // 0x18c0	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0x18c4	
private:
	[[maybe_unused]] uint8_t __pad18c8[0x1c]; // 0x18c8
public:
	bool m_donated; // 0x18e4	
private:
	[[maybe_unused]] uint8_t __pad18e5[0x3]; // 0x18e5
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0x18e8	
	bool m_bWasOwnedByCT; // 0x18ec	
	bool m_bWasOwnedByTerrorist; // 0x18ed	
private:
	[[maybe_unused]] uint8_t __pad18ee[0x2]; // 0x18ee
public:
	float m_gunHeat; // 0x18f0	
	uint32_t m_smokeAttachments; // 0x18f4	
	GameTime_t m_lastSmokeTime; // 0x18f8	
	float m_flNextClientFireBulletTime; // 0x18fc	
	float m_flNextClientFireBulletTime_Repredict; // 0x1900	
private:
	[[maybe_unused]] uint8_t __pad1904[0xdc]; // 0x1904
public:
	C_IronSightController m_IronSightController; // 0x19e0	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0x1a90	
private:
	[[maybe_unused]] uint8_t __pad1a94[0xc]; // 0x1a94
public:
	GameTime_t m_flLastLOSTraceFailureTime; // 0x1aa0	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0x1aa4	
private:
	[[maybe_unused]] uint8_t __pad1aa8[0x58]; // 0x1aa8
public:
	GameTime_t m_flLastMagDropRequestTime; // 0x1b00	
	float m_flWatTickOffset; // 0x1b04	
};


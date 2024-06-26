#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct C_IronSightController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a70
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
	[[maybe_unused]] uint8_t __pad15e8[0x3c]; // 0x15e8
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0x1624	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0x1628	
	int32_t m_nFireSequenceStartTimeAck; // 0x162c	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0x1630	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x1634	
	HSequence m_seqIdle; // 0x1638	
	HSequence m_seqFirePrimary; // 0x163c	
	HSequence m_seqFireSecondary; // 0x1640	
private:
	[[maybe_unused]] uint8_t __pad1644[0x4]; // 0x1644
public:
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0x1648	
	HSequence m_hCurrentThirdPersonSequence; // 0x1660	
	int32_t m_nSilencerBoneIndex; // 0x1664	
	HSequence m_thirdPersonSequences[7]; // 0x1668	
private:
	[[maybe_unused]] uint8_t __pad1684[0x1c]; // 0x1684
public:
	CSWeaponState_t m_ClientPreviousWeaponState; // 0x16a0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0x16a4	
	float m_flCrosshairDistance; // 0x16a8	
	int32_t m_iAmmoLastCheck; // 0x16ac	
	int32_t m_iAlpha; // 0x16b0	
	int32_t m_iScopeTextureID; // 0x16b4	
	int32_t m_iCrosshairTextureID; // 0x16b8	
	float m_flGunAccuracyPositionDeprecated; // 0x16bc	
	int32_t m_nLastEmptySoundCmdNum; // 0x16c0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x16c4	
	bool m_bReloadsWithClips; // 0x16c8	
private:
	[[maybe_unused]] uint8_t __pad16c9[0x3]; // 0x16c9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0x16cc	
	bool m_bFireOnEmpty; // 0x16d0	
private:
	[[maybe_unused]] uint8_t __pad16d1[0x7]; // 0x16d1
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x16d8	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0x1700	
	float m_flTurningInaccuracyDelta; // 0x1704	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0x1708	
	float m_flTurningInaccuracy; // 0x1714	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0x1718	
	GameTime_t m_flLastAccuracyUpdateTime; // 0x171c	
	float m_fAccuracySmoothedForZoom; // 0x1720	
	GameTime_t m_fScopeZoomEndTime; // 0x1724	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0x1728	
	// MNetworkEnable
	float m_flRecoilIndex; // 0x172c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0x1730	
private:
	[[maybe_unused]] uint8_t __pad1731[0x3]; // 0x1731
public:
	GameTime_t m_flLastBurstModeChangeTime; // 0x1734	
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0x1738	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0x173c	
	// MNetworkEnable
	bool m_bInReload; // 0x1740	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0x1741	
private:
	[[maybe_unused]] uint8_t __pad1742[0x2]; // 0x1742
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0x1744	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0x1748	
	// MNetworkEnable
	bool m_bSilencerOn; // 0x1749	
private:
	[[maybe_unused]] uint8_t __pad174a[0x2]; // 0x174a
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0x174c	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0x1750	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0x1754	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0x1758	
private:
	[[maybe_unused]] uint8_t __pad1759[0x3]; // 0x1759
public:
	float m_flNextAttackRenderTimeOffset; // 0x175c	
private:
	[[maybe_unused]] uint8_t __pad1760[0x98]; // 0x1760
public:
	bool m_bClearWeaponIdentifyingUGC; // 0x17f8	
	bool m_bVisualsDataSet; // 0x17f9	
	bool m_bOldFirstPersonSpectatedState; // 0x17fa	
	bool m_bUIWeapon; // 0x17fb	
	int32_t m_nCustomEconReloadEventId; // 0x17fc	
private:
	[[maybe_unused]] uint8_t __pad1800[0x8]; // 0x1800
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPrevOwner; // 0x1808	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0x180c	
private:
	[[maybe_unused]] uint8_t __pad1810[0x1c]; // 0x1810
public:
	bool m_donated; // 0x182c	
private:
	[[maybe_unused]] uint8_t __pad182d[0x3]; // 0x182d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0x1830	
	bool m_bWasOwnedByCT; // 0x1834	
	bool m_bWasOwnedByTerrorist; // 0x1835	
private:
	[[maybe_unused]] uint8_t __pad1836[0x2]; // 0x1836
public:
	float m_gunHeat; // 0x1838	
	uint32_t m_smokeAttachments; // 0x183c	
	GameTime_t m_lastSmokeTime; // 0x1840	
	float m_flNextClientFireBulletTime; // 0x1844	
	float m_flNextClientFireBulletTime_Repredict; // 0x1848	
private:
	[[maybe_unused]] uint8_t __pad184c[0xd4]; // 0x184c
public:
	C_IronSightController m_IronSightController; // 0x1920	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0x19d0	
private:
	[[maybe_unused]] uint8_t __pad19d4[0xc]; // 0x19d4
public:
	GameTime_t m_flLastLOSTraceFailureTime; // 0x19e0	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0x19e4	
private:
	[[maybe_unused]] uint8_t __pad19e8[0x78]; // 0x19e8
public:
	GameTime_t m_flLastMagDropRequestTime; // 0x1a60	
	float m_flWatTickOffset; // 0x1a64	
};


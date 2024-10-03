#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct C_IronSightController;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b00
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
	[[maybe_unused]] uint8_t __pad1698[0x3c]; // 0x1698
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0x16d4	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0x16d8	
	int32_t m_nFireSequenceStartTimeAck; // 0x16dc	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0x16e0	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x16e4	
	HSequence m_seqIdle; // 0x16e8	
	HSequence m_seqFirePrimary; // 0x16ec	
	HSequence m_seqFireSecondary; // 0x16f0	
private:
	[[maybe_unused]] uint8_t __pad16f4[0x4]; // 0x16f4
public:
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0x16f8	
	HSequence m_hCurrentThirdPersonSequence; // 0x1710	
	int32_t m_nSilencerBoneIndex; // 0x1714	
	HSequence m_thirdPersonSequences[7]; // 0x1718	
private:
	[[maybe_unused]] uint8_t __pad1734[0x1c]; // 0x1734
public:
	CSWeaponState_t m_ClientPreviousWeaponState; // 0x1750	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0x1754	
	float m_flCrosshairDistance; // 0x1758	
	int32_t m_iAmmoLastCheck; // 0x175c	
	int32_t m_iAlpha; // 0x1760	
	int32_t m_iScopeTextureID; // 0x1764	
	int32_t m_iCrosshairTextureID; // 0x1768	
	float m_flGunAccuracyPositionDeprecated; // 0x176c	
	int32_t m_nLastEmptySoundCmdNum; // 0x1770	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0x1774	
	bool m_bReloadsWithClips; // 0x1778	
private:
	[[maybe_unused]] uint8_t __pad1779[0x3]; // 0x1779
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0x177c	
	bool m_bFireOnEmpty; // 0x1780	
private:
	[[maybe_unused]] uint8_t __pad1781[0x7]; // 0x1781
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x1788	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0x17b0	
	float m_flTurningInaccuracyDelta; // 0x17b4	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0x17b8	
	float m_flTurningInaccuracy; // 0x17c4	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0x17c8	
	GameTime_t m_flLastAccuracyUpdateTime; // 0x17cc	
	float m_fAccuracySmoothedForZoom; // 0x17d0	
	GameTime_t m_fScopeZoomEndTime; // 0x17d4	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0x17d8	
	// MNetworkEnable
	float m_flRecoilIndex; // 0x17dc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0x17e0	
private:
	[[maybe_unused]] uint8_t __pad17e1[0x3]; // 0x17e1
public:
	GameTime_t m_flLastBurstModeChangeTime; // 0x17e4	
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0x17e8	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0x17ec	
	// MNetworkEnable
	bool m_bInReload; // 0x17f0	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0x17f1	
private:
	[[maybe_unused]] uint8_t __pad17f2[0x2]; // 0x17f2
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0x17f4	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0x17f8	
	// MNetworkEnable
	bool m_bSilencerOn; // 0x17f9	
private:
	[[maybe_unused]] uint8_t __pad17fa[0x2]; // 0x17fa
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0x17fc	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0x1800	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0x1804	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0x1808	
private:
	[[maybe_unused]] uint8_t __pad1809[0x3]; // 0x1809
public:
	float m_flNextAttackRenderTimeOffset; // 0x180c	
private:
	[[maybe_unused]] uint8_t __pad1810[0x98]; // 0x1810
public:
	bool m_bClearWeaponIdentifyingUGC; // 0x18a8	
	bool m_bVisualsDataSet; // 0x18a9	
	bool m_bOldFirstPersonSpectatedState; // 0x18aa	
	bool m_bUIWeapon; // 0x18ab	
	int32_t m_nCustomEconReloadEventId; // 0x18ac	
private:
	[[maybe_unused]] uint8_t __pad18b0[0x8]; // 0x18b0
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hPrevOwner; // 0x18b8	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0x18bc	
private:
	[[maybe_unused]] uint8_t __pad18c0[0x1c]; // 0x18c0
public:
	bool m_donated; // 0x18dc	
private:
	[[maybe_unused]] uint8_t __pad18dd[0x3]; // 0x18dd
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0x18e0	
	bool m_bWasOwnedByCT; // 0x18e4	
	bool m_bWasOwnedByTerrorist; // 0x18e5	
private:
	[[maybe_unused]] uint8_t __pad18e6[0x2]; // 0x18e6
public:
	float m_gunHeat; // 0x18e8	
	uint32_t m_smokeAttachments; // 0x18ec	
	GameTime_t m_lastSmokeTime; // 0x18f0	
	float m_flNextClientFireBulletTime; // 0x18f4	
	float m_flNextClientFireBulletTime_Repredict; // 0x18f8	
private:
	[[maybe_unused]] uint8_t __pad18fc[0xd4]; // 0x18fc
public:
	C_IronSightController m_IronSightController; // 0x19d0	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0x1a80	
private:
	[[maybe_unused]] uint8_t __pad1a84[0xc]; // 0x1a84
public:
	GameTime_t m_flLastLOSTraceFailureTime; // 0x1a90	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0x1a94	
private:
	[[maybe_unused]] uint8_t __pad1a98[0x58]; // 0x1a98
public:
	GameTime_t m_flLastMagDropRequestTime; // 0x1af0	
	float m_flWatTickOffset; // 0x1af4	
};


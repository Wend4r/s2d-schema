#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct CIronSightController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf10
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
class CCSWeaponBase : public CBasePlayerWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d30[0x28]; // 0xd30
public:
	bool m_bRemoveable; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x7]; // 0xd59
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0xd60	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0xd64	
	int32_t m_nFireSequenceStartTimeAck; // 0xd68	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0xd6c	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xd70	
	HSequence m_seqIdle; // 0xd74	
	HSequence m_seqFirePrimary; // 0xd78	
	HSequence m_seqFireSecondary; // 0xd7c	
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0xd80	
	HSequence m_hCurrentThirdPersonSequence; // 0xd98	
	int32_t m_nSilencerBoneIndex; // 0xd9c	
	HSequence m_thirdPersonSequences[7]; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0dbc[0xc]; // 0xdbc
public:
	bool m_bPlayerAmmoStockOnPickup; // 0xdc8	
	bool m_bRequireUseToTouch; // 0xdc9	
private:
	[[maybe_unused]] uint8_t __pad0dca[0x2]; // 0xdca
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0xdcc	
	GameTime_t m_flLastTimeInAir; // 0xdd0	
	GameTime_t m_flLastDeployTime; // 0xdd4	
	int32_t m_nLastEmptySoundCmdNum; // 0xdd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0xddc	
	bool m_bReloadsWithClips; // 0xde0	
private:
	[[maybe_unused]] uint8_t __pad0de1[0x1f]; // 0xde1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0xe00	
	bool m_bFireOnEmpty; // 0xe04	
private:
	[[maybe_unused]] uint8_t __pad0e05[0x3]; // 0xe05
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xe08	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0xe30	
	float m_flTurningInaccuracyDelta; // 0xe34	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0xe38	
	float m_flTurningInaccuracy; // 0xe44	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0xe48	
	GameTime_t m_flLastAccuracyUpdateTime; // 0xe4c	
	float m_fAccuracySmoothedForZoom; // 0xe50	
	GameTime_t m_fScopeZoomEndTime; // 0xe54	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0xe58	
	// MNetworkEnable
	float m_flRecoilIndex; // 0xe5c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e61[0x3]; // 0xe61
public:
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0xe64	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0xe68	
	// MNetworkEnable
	bool m_bInReload; // 0xe6c	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0xe6d	
private:
	[[maybe_unused]] uint8_t __pad0e6e[0x2]; // 0xe6e
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0xe70	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0xe74	
	// MNetworkEnable
	bool m_bSilencerOn; // 0xe75	
private:
	[[maybe_unused]] uint8_t __pad0e76[0x2]; // 0xe76
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0xe78	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0xe7c	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0xe80	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0xe84	
private:
	[[maybe_unused]] uint8_t __pad0e85[0x3]; // 0xe85
public:
	float m_flNextAttackRenderTimeOffset; // 0xe88	
private:
	[[maybe_unused]] uint8_t __pad0e8c[0x14]; // 0xe8c
public:
	bool m_bCanBePickedUp; // 0xea0	
	bool m_bUseCanOverrideNextOwnerTouchTime; // 0xea1	
private:
	[[maybe_unused]] uint8_t __pad0ea2[0x2]; // 0xea2
public:
	GameTime_t m_nextOwnerTouchTime; // 0xea4	
	GameTime_t m_nextPrevOwnerTouchTime; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eac[0x4]; // 0xeac
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xeb0	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb8[0x1c]; // 0xeb8
public:
	bool m_donated; // 0xed4	
private:
	[[maybe_unused]] uint8_t __pad0ed5[0x3]; // 0xed5
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0xed8	
	bool m_bWasOwnedByCT; // 0xedc	
	bool m_bWasOwnedByTerrorist; // 0xedd	
	bool m_bFiredOutOfAmmoEvent; // 0xede	
private:
	[[maybe_unused]] uint8_t __pad0edf[0x1]; // 0xedf
public:
	int32_t m_numRemoveUnownedWeaponThink; // 0xee0	
private:
	[[maybe_unused]] uint8_t __pad0ee4[0x4]; // 0xee4
public:
	CIronSightController m_IronSightController; // 0xee8	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0xf00	
	GameTime_t m_flLastLOSTraceFailureTime; // 0xf04	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0xf08	
	float m_flWatTickOffset; // 0xf0c	
	
	// Datamap fields:
	// void CCSWeaponBaseDefaultTouch; // 0x0
	// void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
	// void InputToggleCanBePickedUp; // 0x0
	// float InputSetAmmoAmount; // 0x0
	// int32_t InputSetReserveAmmoAmount; // 0x0
};


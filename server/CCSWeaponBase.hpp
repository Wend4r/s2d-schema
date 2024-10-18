#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct CIronSightController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf58
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
	[[maybe_unused]] uint8_t __pad0d78[0x28]; // 0xd78
public:
	bool m_bRemoveable; // 0xda0	
private:
	[[maybe_unused]] uint8_t __pad0da1[0x7]; // 0xda1
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0xda8	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0xdac	
	int32_t m_nFireSequenceStartTimeAck; // 0xdb0	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0xdb4	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xdb8	
	HSequence m_seqIdle; // 0xdbc	
	HSequence m_seqFirePrimary; // 0xdc0	
	HSequence m_seqFireSecondary; // 0xdc4	
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0xdc8	
	HSequence m_hCurrentThirdPersonSequence; // 0xde0	
	int32_t m_nSilencerBoneIndex; // 0xde4	
	HSequence m_thirdPersonSequences[7]; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0e04[0xc]; // 0xe04
public:
	bool m_bPlayerAmmoStockOnPickup; // 0xe10	
	bool m_bRequireUseToTouch; // 0xe11	
private:
	[[maybe_unused]] uint8_t __pad0e12[0x2]; // 0xe12
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0xe14	
	GameTime_t m_flLastTimeInAir; // 0xe18	
	GameTime_t m_flLastDeployTime; // 0xe1c	
	int32_t m_nLastEmptySoundCmdNum; // 0xe20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0xe24	
	bool m_bReloadsWithClips; // 0xe28	
private:
	[[maybe_unused]] uint8_t __pad0e29[0x1f]; // 0xe29
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0xe48	
	bool m_bFireOnEmpty; // 0xe4c	
private:
	[[maybe_unused]] uint8_t __pad0e4d[0x3]; // 0xe4d
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xe50	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0xe78	
	float m_flTurningInaccuracyDelta; // 0xe7c	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0xe80	
	float m_flTurningInaccuracy; // 0xe8c	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0xe90	
	GameTime_t m_flLastAccuracyUpdateTime; // 0xe94	
	float m_fAccuracySmoothedForZoom; // 0xe98	
	GameTime_t m_fScopeZoomEndTime; // 0xe9c	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0xea0	
	// MNetworkEnable
	float m_flRecoilIndex; // 0xea4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0ea9[0x3]; // 0xea9
public:
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0xeac	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0xeb0	
	// MNetworkEnable
	bool m_bInReload; // 0xeb4	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0xeb5	
private:
	[[maybe_unused]] uint8_t __pad0eb6[0x2]; // 0xeb6
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0xeb8	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0xebc	
	// MNetworkEnable
	bool m_bSilencerOn; // 0xebd	
private:
	[[maybe_unused]] uint8_t __pad0ebe[0x2]; // 0xebe
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0xec0	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0xec4	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0xec8	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0xecc	
private:
	[[maybe_unused]] uint8_t __pad0ecd[0x3]; // 0xecd
public:
	float m_flNextAttackRenderTimeOffset; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed4[0x14]; // 0xed4
public:
	bool m_bCanBePickedUp; // 0xee8	
	bool m_bUseCanOverrideNextOwnerTouchTime; // 0xee9	
private:
	[[maybe_unused]] uint8_t __pad0eea[0x2]; // 0xeea
public:
	GameTime_t m_nextOwnerTouchTime; // 0xeec	
	GameTime_t m_nextPrevOwnerTouchTime; // 0xef0	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0x4]; // 0xef4
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xef8	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0xefc	
private:
	[[maybe_unused]] uint8_t __pad0f00[0x1c]; // 0xf00
public:
	bool m_donated; // 0xf1c	
private:
	[[maybe_unused]] uint8_t __pad0f1d[0x3]; // 0xf1d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0xf20	
	bool m_bWasOwnedByCT; // 0xf24	
	bool m_bWasOwnedByTerrorist; // 0xf25	
	bool m_bFiredOutOfAmmoEvent; // 0xf26	
private:
	[[maybe_unused]] uint8_t __pad0f27[0x1]; // 0xf27
public:
	int32_t m_numRemoveUnownedWeaponThink; // 0xf28	
private:
	[[maybe_unused]] uint8_t __pad0f2c[0x4]; // 0xf2c
public:
	CIronSightController m_IronSightController; // 0xf30	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0xf48	
	GameTime_t m_flLastLOSTraceFailureTime; // 0xf4c	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0xf50	
	float m_flWatTickOffset; // 0xf54	
	
	// Datamap fields:
	// void CCSWeaponBaseDefaultTouch; // 0x0
	// void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
	// void InputToggleCanBePickedUp; // 0x0
	// float InputSetAmmoAmount; // 0x0
	// int32_t InputSetReserveAmmoAmount; // 0x0
};


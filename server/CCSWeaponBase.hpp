#pragma once

#include <cstdint>

struct HSequence;
struct GameTime_t;
struct CEntityIOOutput;
struct GameTick_t;
struct CIronSightController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe98
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
	[[maybe_unused]] uint8_t __pad0cb8[0x28]; // 0xcb8
public:
	bool m_bRemoveable; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0ce1[0x7]; // 0xce1
public:
	// MNetworkEnable
	float m_flFireSequenceStartTime; // 0xce8	
	// MNetworkEnable
	int32_t m_nFireSequenceStartTimeChange; // 0xcec	
	int32_t m_nFireSequenceStartTimeAck; // 0xcf0	
	// MNetworkEnable
	PlayerAnimEvent_t m_ePlayerFireEvent; // 0xcf4	
	// MNetworkEnable
	WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xcf8	
	HSequence m_seqIdle; // 0xcfc	
	HSequence m_seqFirePrimary; // 0xd00	
	HSequence m_seqFireSecondary; // 0xd04	
	CUtlVector< HSequence > m_thirdPersonFireSequences; // 0xd08	
	HSequence m_hCurrentThirdPersonSequence; // 0xd20	
	int32_t m_nSilencerBoneIndex; // 0xd24	
	HSequence m_thirdPersonSequences[7]; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d44[0xc]; // 0xd44
public:
	bool m_bPlayerAmmoStockOnPickup; // 0xd50	
	bool m_bRequireUseToTouch; // 0xd51	
private:
	[[maybe_unused]] uint8_t __pad0d52[0x2]; // 0xd52
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateNetworkChange"
	CSWeaponState_t m_iState; // 0xd54	
	GameTime_t m_flLastTimeInAir; // 0xd58	
	GameTime_t m_flLastDeployTime; // 0xd5c	
	int32_t m_nLastEmptySoundCmdNum; // 0xd60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nViewModelIndex; // 0xd64	
	bool m_bReloadsWithClips; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x1f]; // 0xd69
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	// MNetworkPriority "32"
	GameTime_t m_flTimeWeaponIdle; // 0xd88	
	bool m_bFireOnEmpty; // 0xd8c	
private:
	[[maybe_unused]] uint8_t __pad0d8d[0x3]; // 0xd8d
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xd90	
	// MNetworkEnable
	CSWeaponMode m_weaponMode; // 0xdb8	
	float m_flTurningInaccuracyDelta; // 0xdbc	
	Vector m_vecTurningInaccuracyEyeDirLast; // 0xdc0	
	float m_flTurningInaccuracy; // 0xdcc	
	// MNetworkEnable
	float m_fAccuracyPenalty; // 0xdd0	
	GameTime_t m_flLastAccuracyUpdateTime; // 0xdd4	
	float m_fAccuracySmoothedForZoom; // 0xdd8	
	GameTime_t m_fScopeZoomEndTime; // 0xddc	
	// MNetworkEnable
	int32_t m_iRecoilIndex; // 0xde0	
	// MNetworkEnable
	float m_flRecoilIndex; // 0xde4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
	bool m_bBurstMode; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0de9[0x3]; // 0xde9
public:
	// MNetworkEnable
	GameTick_t m_nPostponeFireReadyTicks; // 0xdec	
	// MNetworkEnable
	float m_flPostponeFireReadyFrac; // 0xdf0	
	// MNetworkEnable
	bool m_bInReload; // 0xdf4	
	// MNetworkEnable
	bool m_bReloadVisuallyComplete; // 0xdf5	
private:
	[[maybe_unused]] uint8_t __pad0df6[0x2]; // 0xdf6
public:
	// MNetworkEnable
	GameTime_t m_flDroppedAtTime; // 0xdf8	
	// MNetworkEnable
	bool m_bIsHauledBack; // 0xdfc	
	// MNetworkEnable
	bool m_bSilencerOn; // 0xdfd	
private:
	[[maybe_unused]] uint8_t __pad0dfe[0x2]; // 0xdfe
public:
	// MNetworkEnable
	GameTime_t m_flTimeSilencerSwitchComplete; // 0xe00	
	// MNetworkEnable
	int32_t m_iOriginalTeamNumber; // 0xe04	
	// MNetworkEnable
	int32_t m_iMostRecentTeamNumber; // 0xe08	
	// MNetworkEnable
	bool m_bDroppedNearBuyZone; // 0xe0c	
private:
	[[maybe_unused]] uint8_t __pad0e0d[0x3]; // 0xe0d
public:
	float m_flNextAttackRenderTimeOffset; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e14[0x14]; // 0xe14
public:
	bool m_bCanBePickedUp; // 0xe28	
	bool m_bUseCanOverrideNextOwnerTouchTime; // 0xe29	
private:
	[[maybe_unused]] uint8_t __pad0e2a[0x2]; // 0xe2a
public:
	GameTime_t m_nextOwnerTouchTime; // 0xe2c	
	GameTime_t m_nextPrevOwnerTouchTime; // 0xe30	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x4]; // 0xe34
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hPrevOwner; // 0xe38	
	// MNetworkEnable
	GameTick_t m_nDropTick; // 0xe3c	
private:
	[[maybe_unused]] uint8_t __pad0e40[0x1c]; // 0xe40
public:
	bool m_donated; // 0xe5c	
private:
	[[maybe_unused]] uint8_t __pad0e5d[0x3]; // 0xe5d
public:
	// MNetworkEnable
	GameTime_t m_fLastShotTime; // 0xe60	
	bool m_bWasOwnedByCT; // 0xe64	
	bool m_bWasOwnedByTerrorist; // 0xe65	
	bool m_bFiredOutOfAmmoEvent; // 0xe66	
private:
	[[maybe_unused]] uint8_t __pad0e67[0x1]; // 0xe67
public:
	int32_t m_numRemoveUnownedWeaponThink; // 0xe68	
private:
	[[maybe_unused]] uint8_t __pad0e6c[0x4]; // 0xe6c
public:
	CIronSightController m_IronSightController; // 0xe70	
	// MNetworkEnable
	int32_t m_iIronSightMode; // 0xe88	
	GameTime_t m_flLastLOSTraceFailureTime; // 0xe8c	
	// MNetworkEnable
	int32_t m_iNumEmptyAttacks; // 0xe90	
	float m_flWatTickOffset; // 0xe94	
	
	// Datamap fields:
	// void CCSWeaponBaseDefaultTouch; // 0x0
	// void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
	// void InputToggleCanBePickedUp; // 0x0
	// float InputSetAmmoAmount; // 0x0
	// int32_t InputSetReserveAmmoAmount; // 0x0
};


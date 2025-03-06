#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1420
// Has VTable
// 
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarNames "QAngle m_angClientCamera"
// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames "int32 m_nLevel"
// MNetworkVarNames "int32 m_nCurrencies"
// MNetworkVarNames "int32 m_nSpentCurrencies"
// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "bool m_bInRegenerationZone"
// MNetworkVarNames "bool m_bInItemShopZone"
// MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
// MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
// MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
// MNetworkVarNames "bool m_bNetworkDisconnected"
// MNetworkVarNames "bool m_bHasIncomingThreats"
// MNetworkVarNames "bool m_bLearningAbility"
// MNetworkVarNames "int m_nFlashStartTick"
// MNetworkVarNames "int m_nFlashMaxStartTick"
// MNetworkVarNames "int m_nFlashFadeStartTick"
// MNetworkVarNames "int m_nFlashEndTick"
// MNetworkVarNames "int8 m_nFlashMaxAlpha"
// MNetworkVarNames "int32 m_nDeducedLane"
// MNetworkVarNames "int8 m_nSuccessiveDucks"
// MNetworkVarNames "GameTime_t m_flLastDuckTime"
// MNetworkVarNames "bool m_bDismissedReportCard"
// MNetworkVarNames "float m_flCurrentHealingAmount"
// MNetworkVarNames "QAngle m_angLockedEyeAngles"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames "bool m_bAnimGraphMovementClipped"
// MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
// MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
// MNetworkVarNames "float32 m_flPredSlowSpeed"
// MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
// MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
// MNetworkVarNames "float32 m_flSlowSpeed"
// MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
class C_CitadelPlayerPawn : public CCitadelPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0ef0[0x60]; // 0xef0
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f5c[0xc]; // 0xf5c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xf68	
	// MNetworkEnable
	CMsgLaneColor m_eZipLineLaneColor; // 0xf74	
	// MNetworkEnable
	// MNetworkChangeCallback "LevelChanged"
	int32_t m_nLevel; // 0xf78	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "CurrenciesChanged"
	int32_t m_nCurrencies[4]; // 0xf7c	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xf8c	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xf9c	
	// MNetworkEnable
	// MNetworkChangeCallback "RespawnTimeChanged"
	GameTime_t m_flRespawnTime; // 0xfa0	
	// MNetworkEnable
	// MNetworkChangeCallback "InRegenZoneChanged"
	bool m_bInRegenerationZone; // 0xfa4	
	// MNetworkEnable
	// MNetworkChangeCallback "InItemShopZoneChanged"
	bool m_bInItemShopZone; // 0xfa5	
private:
	[[maybe_unused]] uint8_t __pad0fa6[0x2]; // 0xfa6
public:
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfa8	
private:
	[[maybe_unused]] uint8_t __pad0fac[0x4]; // 0xfac
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xfb0	
	// MNetworkEnable
	// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xfc8	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xfe0	
	// MNetworkEnable
	bool m_bHasIncomingThreats; // 0xfe1	
	// MNetworkEnable
	bool m_bLearningAbility; // 0xfe2	
private:
	[[maybe_unused]] uint8_t __pad0fe3[0x1]; // 0xfe3
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashStartChanged"
	int32_t m_nFlashStartTick; // 0xfe4	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xfe8	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xfec	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xff0	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xff4	
private:
	[[maybe_unused]] uint8_t __pad0ff5[0x3]; // 0xff5
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xff8	
	// MNetworkEnable
	int8_t m_nSuccessiveDucks; // 0xffc	
private:
	[[maybe_unused]] uint8_t __pad0ffd[0x3]; // 0xffd
public:
	// MNetworkEnable
	GameTime_t m_flLastDuckTime; // 0x1000	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0x1004	
private:
	[[maybe_unused]] uint8_t __pad1005[0x3]; // 0x1005
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0x1008	
	// MNetworkEnable
	QAngle m_angLockedEyeAngles; // 0x100c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1018	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11b8	
private:
	[[maybe_unused]] uint8_t __pad11d8[0xb4]; // 0x11d8
public:
	float m_flRichPresenceUpdateInterval; // 0x128c	
private:
	[[maybe_unused]] uint8_t __pad1290[0xf8]; // 0x1290
public:
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped; // 0x1388	
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity; // 0x1389	
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl; // 0x138a	
private:
	[[maybe_unused]] uint8_t __pad138b[0x1]; // 0x138b
public:
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart; // 0x138c	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd; // 0x1390	
	// MNetworkEnable
	float m_flPredSlowSpeed; // 0x1394	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedStart[4]; // 0x1398	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedEnd[4]; // 0x13a8	
	// MNetworkEnable
	float m_flSlowSpeed[4]; // 0x13b8	
	// MNetworkEnable
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x13c8	
	int32_t m_iCurSlowSlot; // 0x13cc	
	bool m_bLocoLeanTriggeredForDirection; // 0x13d0	
	bool m_bLocoRunToStopCanTrigger; // 0x13d1	
private:
	[[maybe_unused]] uint8_t __pad13d2[0x2]; // 0x13d2
public:
	float m_flCrouchFraction; // 0x13d4	
	float m_flCrouchSpeed; // 0x13d8	
	Vector m_vShootTestOffsetStanding; // 0x13dc	
	Vector m_vShootTestOffsetCrouching; // 0x13e8	
	GameTime_t m_leanStartTime; // 0x13f4	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xd58
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xd60
};


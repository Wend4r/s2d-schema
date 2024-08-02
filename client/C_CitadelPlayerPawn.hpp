#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1348
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
	[[maybe_unused]] uint8_t __pad0e48[0x60]; // 0xe48
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0xc]; // 0xeb4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xec0	
	// MNetworkEnable
	CMsgLaneColor m_eZipLineLaneColor; // 0xecc	
	// MNetworkEnable
	// MNetworkChangeCallback "LevelChanged"
	int32_t m_nLevel; // 0xed0	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "CurrenciesChanged"
	int32_t m_nCurrencies[4]; // 0xed4	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xee4	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xef4	
	// MNetworkEnable
	// MNetworkChangeCallback "RespawnTimeChanged"
	GameTime_t m_flRespawnTime; // 0xef8	
	// MNetworkEnable
	// MNetworkChangeCallback "InRegenZoneChanged"
	bool m_bInRegenerationZone; // 0xefc	
	// MNetworkEnable
	// MNetworkChangeCallback "InItemShopZoneChanged"
	bool m_bInItemShopZone; // 0xefd	
private:
	[[maybe_unused]] uint8_t __pad0efe[0x2]; // 0xefe
public:
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf00	
private:
	[[maybe_unused]] uint8_t __pad0f04[0x4]; // 0xf04
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xf08	
	// MNetworkEnable
	// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xf20	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xf38	
	// MNetworkEnable
	bool m_bHasIncomingThreats; // 0xf39	
	// MNetworkEnable
	bool m_bLearningAbility; // 0xf3a	
private:
	[[maybe_unused]] uint8_t __pad0f3b[0x1]; // 0xf3b
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashStartChanged"
	int32_t m_nFlashStartTick; // 0xf3c	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xf40	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xf44	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xf48	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xf4c	
private:
	[[maybe_unused]] uint8_t __pad0f4d[0x3]; // 0xf4d
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xf50	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xf54	
private:
	[[maybe_unused]] uint8_t __pad0f55[0x3]; // 0xf55
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xf58	
	// MNetworkEnable
	QAngle m_angLockedEyeAngles; // 0xf5c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf68	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1108	
private:
	[[maybe_unused]] uint8_t __pad1128[0xa0]; // 0x1128
public:
	float m_flRichPresenceUpdateInterval; // 0x11c8	
private:
	[[maybe_unused]] uint8_t __pad11cc[0xf4]; // 0x11cc
public:
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped; // 0x12c0	
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity; // 0x12c1	
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl; // 0x12c2	
	bool m_bLastMoveWasAnimGraph; // 0x12c3	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart; // 0x12c4	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd; // 0x12c8	
	// MNetworkEnable
	float m_flPredSlowSpeed; // 0x12cc	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedStart[4]; // 0x12d0	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedEnd[4]; // 0x12e0	
	// MNetworkEnable
	float m_flSlowSpeed[4]; // 0x12f0	
	// MNetworkEnable
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x1300	
	int32_t m_iCurSlowSlot; // 0x1304	
	Vector m_vShootTestOffsetStanding; // 0x1308	
	Vector m_vShootTestOffsetCrouching; // 0x1314	
	GameTime_t m_leanStartTime; // 0x1320	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xcc8
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xcd0
};


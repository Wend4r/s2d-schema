#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1320
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
	// MNetworkChangeCallback "RespawnTimeChanged"
	GameTime_t m_flRespawnTime; // 0xef4	
	// MNetworkEnable
	// MNetworkChangeCallback "InRegenZoneChanged"
	bool m_bInRegenerationZone; // 0xef8	
	// MNetworkEnable
	// MNetworkChangeCallback "InItemShopZoneChanged"
	bool m_bInItemShopZone; // 0xef9	
private:
	[[maybe_unused]] uint8_t __pad0efa[0x2]; // 0xefa
public:
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xefc	
	// MNetworkEnable
	// MNetworkChangeCallback "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xf00	
	// MNetworkEnable
	// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xf18	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xf30	
	// MNetworkEnable
	bool m_bHasIncomingThreats; // 0xf31	
	// MNetworkEnable
	bool m_bLearningAbility; // 0xf32	
private:
	[[maybe_unused]] uint8_t __pad0f33[0x1]; // 0xf33
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashStartChanged"
	int32_t m_nFlashStartTick; // 0xf34	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xf38	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xf3c	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xf40	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xf44	
private:
	[[maybe_unused]] uint8_t __pad0f45[0x3]; // 0xf45
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xf48	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xf4c	
private:
	[[maybe_unused]] uint8_t __pad0f4d[0x3]; // 0xf4d
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xf50	
	// MNetworkEnable
	QAngle m_angLockedEyeAngles; // 0xf54	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf60	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1100	
private:
	[[maybe_unused]] uint8_t __pad1120[0xa0]; // 0x1120
public:
	float m_flRichPresenceUpdateInterval; // 0x11c0	
private:
	[[maybe_unused]] uint8_t __pad11c4[0xf4]; // 0x11c4
public:
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped; // 0x12b8	
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity; // 0x12b9	
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl; // 0x12ba	
	bool m_bLastMoveWasAnimGraph; // 0x12bb	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart; // 0x12bc	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd; // 0x12c0	
	// MNetworkEnable
	float m_flPredSlowSpeed; // 0x12c4	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedStart[4]; // 0x12c8	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedEnd[4]; // 0x12d8	
	// MNetworkEnable
	float m_flSlowSpeed[4]; // 0x12e8	
	// MNetworkEnable
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x12f8	
	int32_t m_iCurSlowSlot; // 0x12fc	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xcc8
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xcd0
};


#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1460
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
	[[maybe_unused]] uint8_t __pad0ee8[0x60]; // 0xee8
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkChangeCallback "playerEyeAnglesChanged"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f54[0xc]; // 0xf54
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xf60	
	// MNetworkEnable
	CMsgLaneColor m_eZipLineLaneColor; // 0xf6c	
	// MNetworkEnable
	// MNetworkChangeCallback "LevelChanged"
	int32_t m_nLevel; // 0xf70	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkChangeCallback "CurrenciesChanged"
	int32_t m_nCurrencies[4]; // 0xf74	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xf84	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xf94	
	// MNetworkEnable
	// MNetworkChangeCallback "RespawnTimeChanged"
	GameTime_t m_flRespawnTime; // 0xf98	
	// MNetworkEnable
	// MNetworkChangeCallback "InRegenZoneChanged"
	bool m_bInRegenerationZone; // 0xf9c	
	// MNetworkEnable
	// MNetworkChangeCallback "InItemShopZoneChanged"
	bool m_bInItemShopZone; // 0xf9d	
private:
	[[maybe_unused]] uint8_t __pad0f9e[0x2]; // 0xf9e
public:
	// MNetworkEnable
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfa0	
private:
	[[maybe_unused]] uint8_t __pad0fa4[0x4]; // 0xfa4
public:
	// MNetworkEnable
	// MNetworkChangeCallback "ItemSellPriceChanged"
	C_NetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xfa8	
	// MNetworkEnable
	// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
	C_NetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xfc0	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xfd8	
	// MNetworkEnable
	bool m_bHasIncomingThreats; // 0xfd9	
	// MNetworkEnable
	bool m_bLearningAbility; // 0xfda	
private:
	[[maybe_unused]] uint8_t __pad0fdb[0x1]; // 0xfdb
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnFlashStartChanged"
	int32_t m_nFlashStartTick; // 0xfdc	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xfe0	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xfe4	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xfe8	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xfec	
private:
	[[maybe_unused]] uint8_t __pad0fed[0x3]; // 0xfed
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xff0	
	// MNetworkEnable
	int8_t m_nSuccessiveDucks; // 0xff4	
private:
	[[maybe_unused]] uint8_t __pad0ff5[0x3]; // 0xff5
public:
	// MNetworkEnable
	GameTime_t m_flLastDuckTime; // 0xff8	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xffc	
private:
	[[maybe_unused]] uint8_t __pad0ffd[0x3]; // 0xffd
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0x1000	
	// MNetworkEnable
	QAngle m_angLockedEyeAngles; // 0x1004	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1010	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11b0	
private:
	[[maybe_unused]] uint8_t __pad11d0[0xa8]; // 0x11d0
public:
	float m_flRichPresenceUpdateInterval; // 0x1278	
private:
	[[maybe_unused]] uint8_t __pad127c[0xf4]; // 0x127c
public:
	// MNetworkEnable
	bool m_bAnimGraphMovementClipped; // 0x1370	
	// MNetworkEnable
	bool m_bAnimGraphMovementDisableGravity; // 0x1371	
	// MNetworkEnable
	bool m_bAnimGraphMovementDirectAirControl; // 0x1372	
private:
	[[maybe_unused]] uint8_t __pad1373[0x1]; // 0x1373
public:
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedStart; // 0x1374	
	// MNetworkEnable
	GameTime_t m_flPredTimeSlowedEnd; // 0x1378	
	// MNetworkEnable
	float m_flPredSlowSpeed; // 0x137c	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedStart[4]; // 0x1380	
	// MNetworkEnable
	GameTime_t m_flTimeSlowedEnd[4]; // 0x1390	
	// MNetworkEnable
	float m_flSlowSpeed[4]; // 0x13a0	
	// MNetworkEnable
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x13b0	
	int32_t m_iCurSlowSlot; // 0x13b4	
	Vector m_vShootTestOffsetStanding; // 0x13b8	
	Vector m_vShootTestOffsetCrouching; // 0x13c4	
	GameTime_t m_leanStartTime; // 0x13d0	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xd50
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xd58
};


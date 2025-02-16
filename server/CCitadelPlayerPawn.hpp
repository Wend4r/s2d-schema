#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityComponent;
struct CCitadelHeroComponent;
struct CCitadelRegenComponent;
struct CCitadelMinimapComponent;
struct CTakeDamageResult;
struct ParticleIndex_t;
struct CCitadelPlayerBot;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkUserGroupProxy "CCitadelPlayerPawn"
// MNetworkUserGroupProxy "CCitadelPlayerPawn"
// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
// MNetworkIncludeByName "m_pCameraServices"
// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
// MNetworkIncludeByName "m_pMovementServices"
// MNetworkVarNames "QAngle m_angClientCamera"
// MNetworkVarNames "QAngle m_angEyeAngles"
// MNetworkVarNames "QAngle m_angLockedEyeAngles"
// MNetworkVarNames "int32 m_nLevel"
// MNetworkVarNames "int32 m_nCurrencies"
// MNetworkVarNames "int32 m_nSpentCurrencies"
// MNetworkVarNames "GameTime_t m_flRespawnTime"
// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
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
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
// MNetworkVarNames "int8 m_nSuccessiveDucks"
// MNetworkVarNames "GameTime_t m_flLastDuckTime"
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
class CCitadelPlayerPawn : public CCitadelPlayerPawnBase
{
private:
	[[maybe_unused]] uint8_t __pad0d18[0x18]; // 0xd18
public:
	int32_t m_arrGoldSources[37]; // 0xd30	
	// MNetworkEnable
	// MNetworkUserGroup "SourceTVExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xdc4	
	// MNetworkEnable
	// MNetworkUserGroup "RemotePlayersOnly"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xdd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles; // 0xddc	
	// MNetworkEnable
	int32_t m_nLevel; // 0xde8	
	// MNetworkEnable
	int32_t m_nCurrencies[4]; // 0xdec	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xdfc	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0xe0c	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xe10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone; // 0xe14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInItemShopZone; // 0xe15	
private:
	[[maybe_unused]] uint8_t __pad0e16[0x2]; // 0xe16
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xe20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xe38	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xe98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bHasIncomingThreats; // 0xe99	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bLearningAbility; // 0xe9a	
private:
	[[maybe_unused]] uint8_t __pad0e9b[0x1]; // 0xe9b
public:
	// MNetworkEnable
	int32_t m_nFlashStartTick; // 0xe9c	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xea0	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xea4	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xea8	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xeac	
private:
	[[maybe_unused]] uint8_t __pad0ead[0x3]; // 0xead
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xeb0	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb5[0x3]; // 0xeb5
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xeb8	
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // 0xebc	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	// MNetworkPriority "32"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xec0	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x10c8	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x10e8	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1268	
	bool m_bHasShopOpen; // 0x1280	
private:
	[[maybe_unused]] uint8_t __pad1281[0x3]; // 0x1281
public:
	ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1284	
private:
	[[maybe_unused]] uint8_t __pad1288[0xc]; // 0x1288
public:
	float m_flLastRegenThinkTime; // 0x1294	
	float m_flCitadelDamageAccumulator; // 0x1298	
private:
	[[maybe_unused]] uint8_t __pad129c[0x34]; // 0x129c
public:
	int32_t m_nBulletsFiredAtUs; // 0x12d0	
	int32_t m_nBulletsHitOnUs; // 0x12d4	
	int32_t m_nHeadshotsOnUs; // 0x12d8	
	GameTime_t m_flLastGameStatsRecorded; // 0x12dc	
	float m_flUnusedGoldRemainder; // 0x12e0	
	float m_flUnusedAbilityRemainder; // 0x12e4	
	int32_t m_nBulletsFiredAtEnemyHeroes; // 0x12e8	
	int32_t m_nBulletsHitOnEnemyHeroes; // 0x12ec	
	int32_t m_nHeadshotsOnEnemyHeroes; // 0x12f0	
	int32_t m_nLuckyShotsOnEnemyHeroes; // 0x12f4	
	int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x12f8	
	int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x12fc	
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // 0x1300	
	bool m_bHasOverrideSpawnPos; // 0x1304	
private:
	[[maybe_unused]] uint8_t __pad1305[0x3]; // 0x1305
public:
	Vector m_vecOverrideSpawnPos; // 0x1308	
	int32_t m_iKillStreak; // 0x1314	
	int32_t m_iTrooperWaveEventCount; // 0x1318	
	int32_t m_iTrooperWaveNumber; // 0x131c	
	int32_t m_iPrevTrooperWaveEventCount; // 0x1320	
	int32_t m_iPrevTrooperWaveNumber; // 0x1324	
	bool m_bHasStartedPlaying; // 0x1328	
private:
	[[maybe_unused]] uint8_t __pad1329[0x3]; // 0x1329
public:
	CHandle< CBaseEntity > m_hRevengeTarget; // 0x132c	
private:
	[[maybe_unused]] uint8_t __pad1330[0xc]; // 0x1330
public:
	GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x133c	
	GameTime_t m_flLastTimeLookedAtByDirector; // 0x1340	
private:
	[[maybe_unused]] uint8_t __pad1344[0x4]; // 0x1344
public:
	CTakeDamageResult m_ragdollDamage; // 0x1348	
	CUtlVector< CHandle< CBaseEntity > > m_vecThreats; // 0x1368	
private:
	[[maybe_unused]] uint8_t __pad1380[0x154]; // 0x1380
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor; // 0x14d4	
	bool m_bCanBecomeRagdoll; // 0x14d8	
private:
	[[maybe_unused]] uint8_t __pad14d9[0x3]; // 0x14d9
public:
	float m_blindUntilTime; // 0x14dc	
	float m_blindStartTime; // 0x14e0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int8_t m_nSuccessiveDucks; // 0x14e4	
private:
	[[maybe_unused]] uint8_t __pad14e5[0x3]; // 0x14e5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flLastDuckTime; // 0x14e8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped; // 0x14ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity; // 0x14ed	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl; // 0x14ee	
private:
	[[maybe_unused]] uint8_t __pad14ef[0x1]; // 0x14ef
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart; // 0x14f0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd; // 0x14f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flPredSlowSpeed; // 0x14f8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedStart[4]; // 0x14fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedEnd[4]; // 0x150c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flSlowSpeed[4]; // 0x151c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x152c	
	bool m_bPreventAbilityLearning; // 0x1530	
private:
	[[maybe_unused]] uint8_t __pad1531[0x3]; // 0x1531
public:
	int32_t m_iCurSlowSlot; // 0x1534	
private:
	[[maybe_unused]] uint8_t __pad1538[0x4]; // 0x1538
public:
	ParticleIndex_t m_nRespawnParticleIndex; // 0x153c	
	ParticleIndex_t m_nShoppingParticle; // 0x1540	
private:
	[[maybe_unused]] uint8_t __pad1544[0x2c]; // 0x1544
public:
	CCitadelPlayerBot* m_pBot; // 0x1570	
private:
	[[maybe_unused]] uint8_t __pad1578[0x158]; // 0x1578
public:
	Vector m_vShootTestOffsetStanding; // 0x16d0	
	Vector m_vShootTestOffsetCrouching; // 0x16dc	
	GameTime_t m_leanStartTime; // 0x16e8	
	GameTick_t m_nLastUnpredictableMovementTick; // 0x16ec	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xb88
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xb90
};


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
// Size: 0x17e8
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
	[[maybe_unused]] uint8_t __pad0db0[0x18]; // 0xdb0
public:
	int32_t m_arrGoldSources[38]; // 0xdc8	
private:
	[[maybe_unused]] uint8_t __pad0e60[0x28]; // 0xe60
public:
	// MNetworkEnable
	// MNetworkUserGroup "SourceTVExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xe88	
	// MNetworkEnable
	// MNetworkUserGroup "RemotePlayersOnly"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xe94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles; // 0xea0	
	// MNetworkEnable
	int32_t m_nLevel; // 0xeac	
	// MNetworkEnable
	int32_t m_nCurrencies[4]; // 0xeb0	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xec0	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0xed0	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xed4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone; // 0xed8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInItemShopZone; // 0xed9	
private:
	[[maybe_unused]] uint8_t __pad0eda[0x2]; // 0xeda
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xedc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xee0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xef8	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xf58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bHasIncomingThreats; // 0xf59	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bLearningAbility; // 0xf5a	
private:
	[[maybe_unused]] uint8_t __pad0f5b[0x1]; // 0xf5b
public:
	// MNetworkEnable
	int32_t m_nFlashStartTick; // 0xf5c	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xf60	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xf64	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xf68	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xf6c	
private:
	[[maybe_unused]] uint8_t __pad0f6d[0x3]; // 0xf6d
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xf70	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xf74	
private:
	[[maybe_unused]] uint8_t __pad0f75[0x3]; // 0xf75
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xf78	
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // 0xf7c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	// MNetworkPriority "32"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf80	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1188	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x11a8	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1328	
	bool m_bHasShopOpen; // 0x1340	
private:
	[[maybe_unused]] uint8_t __pad1341[0x3]; // 0x1341
public:
	ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1344	
private:
	[[maybe_unused]] uint8_t __pad1348[0xc]; // 0x1348
public:
	float m_flLastRegenThinkTime; // 0x1354	
	float m_flCitadelDamageAccumulator; // 0x1358	
private:
	[[maybe_unused]] uint8_t __pad135c[0x34]; // 0x135c
public:
	int32_t m_nBulletsFiredAtUs; // 0x1390	
	int32_t m_nBulletsHitOnUs; // 0x1394	
	int32_t m_nHeadshotsOnUs; // 0x1398	
	GameTime_t m_flLastGameStatsRecorded; // 0x139c	
	float m_flUnusedGoldRemainder; // 0x13a0	
	float m_flUnusedAbilityRemainder; // 0x13a4	
	int32_t m_nBulletsFiredAtEnemyHeroes; // 0x13a8	
	int32_t m_nBulletsHitOnEnemyHeroes; // 0x13ac	
	int32_t m_nHeadshotsOnEnemyHeroes; // 0x13b0	
	int32_t m_nLuckyShotsOnEnemyHeroes; // 0x13b4	
	int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x13b8	
	int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x13bc	
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // 0x13c0	
	bool m_bHasOverrideSpawnPos; // 0x13c4	
private:
	[[maybe_unused]] uint8_t __pad13c5[0x3]; // 0x13c5
public:
	Vector m_vecOverrideSpawnPos; // 0x13c8	
	int32_t m_iKillStreak; // 0x13d4	
	int32_t m_iTrooperWaveEventCount; // 0x13d8	
	int32_t m_iTrooperWaveNumber; // 0x13dc	
	int32_t m_iPrevTrooperWaveEventCount; // 0x13e0	
	int32_t m_iPrevTrooperWaveNumber; // 0x13e4	
	bool m_bHasStartedPlaying; // 0x13e8	
private:
	[[maybe_unused]] uint8_t __pad13e9[0x3]; // 0x13e9
public:
	CHandle< CBaseEntity > m_hRevengeTarget; // 0x13ec	
private:
	[[maybe_unused]] uint8_t __pad13f0[0xc]; // 0x13f0
public:
	GameTime_t m_flLastHurtTimeByEnemyHero; // 0x13fc	
	GameTime_t m_flLastHurtByNeutral; // 0x1400	
	GameTime_t m_flLastHurtByEnemyNPC; // 0x1404	
	GameTime_t m_flLastTimeLookedAtByDirector; // 0x1408	
private:
	[[maybe_unused]] uint8_t __pad140c[0x4]; // 0x140c
public:
	CTakeDamageResult m_ragdollDamage; // 0x1410	
	CUtlVector< CHandle< CBaseEntity > > m_vecThreats; // 0x1430	
private:
	[[maybe_unused]] uint8_t __pad1448[0x16c]; // 0x1448
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor; // 0x15b4	
	bool m_bCanBecomeRagdoll; // 0x15b8	
private:
	[[maybe_unused]] uint8_t __pad15b9[0x3]; // 0x15b9
public:
	float m_blindUntilTime; // 0x15bc	
	float m_blindStartTime; // 0x15c0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int8_t m_nSuccessiveDucks; // 0x15c4	
private:
	[[maybe_unused]] uint8_t __pad15c5[0x3]; // 0x15c5
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flLastDuckTime; // 0x15c8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped; // 0x15cc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity; // 0x15cd	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl; // 0x15ce	
private:
	[[maybe_unused]] uint8_t __pad15cf[0x1]; // 0x15cf
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart; // 0x15d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd; // 0x15d4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flPredSlowSpeed; // 0x15d8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedStart[4]; // 0x15dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedEnd[4]; // 0x15ec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flSlowSpeed[4]; // 0x15fc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x160c	
	bool m_bPreventAbilityLearning; // 0x1610	
private:
	[[maybe_unused]] uint8_t __pad1611[0x3]; // 0x1611
public:
	int32_t m_iCurSlowSlot; // 0x1614	
private:
	[[maybe_unused]] uint8_t __pad1618[0x4]; // 0x1618
public:
	ParticleIndex_t m_nRespawnParticleIndex; // 0x161c	
	ParticleIndex_t m_nShoppingParticle; // 0x1620	
private:
	[[maybe_unused]] uint8_t __pad1624[0x2c]; // 0x1624
public:
	CCitadelPlayerBot* m_pBot; // 0x1650	
private:
	[[maybe_unused]] uint8_t __pad1658[0x158]; // 0x1658
public:
	bool m_bLocoLeanTriggeredForDirection; // 0x17b0	
	bool m_bLocoRunToStopCanTrigger; // 0x17b1	
private:
	[[maybe_unused]] uint8_t __pad17b2[0x2]; // 0x17b2
public:
	float m_flCrouchFraction; // 0x17b4	
	float m_flCrouchSpeed; // 0x17b8	
	Vector m_vShootTestOffsetStanding; // 0x17bc	
	Vector m_vShootTestOffsetCrouching; // 0x17c8	
	GameTime_t m_leanStartTime; // 0x17d4	
	GameTick_t m_nLastUnpredictableMovementTick; // 0x17d8	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xc20
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xc28
};


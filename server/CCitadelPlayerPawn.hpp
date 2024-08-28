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
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1558
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
	[[maybe_unused]] uint8_t __pad0c28[0x18]; // 0xc28
public:
	int32_t m_arrGoldSources[32]; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "SourceTVExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "RemotePlayersOnly"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xccc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles; // 0xcd8	
	// MNetworkEnable
	int32_t m_nLevel; // 0xce4	
	// MNetworkEnable
	int32_t m_nCurrencies[4]; // 0xce8	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xcf8	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0xd08	
	// MNetworkEnable
	GameTime_t m_flLastSpawnTime; // 0xd0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone; // 0xd10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInItemShopZone; // 0xd11	
private:
	[[maybe_unused]] uint8_t __pad0d12[0x2]; // 0xd12
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xd18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xd30	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xd48	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bHasIncomingThreats; // 0xd49	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bLearningAbility; // 0xd4a	
private:
	[[maybe_unused]] uint8_t __pad0d4b[0x1]; // 0xd4b
public:
	// MNetworkEnable
	int32_t m_nFlashStartTick; // 0xd4c	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xd50	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xd54	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xd58	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d5d[0x3]; // 0xd5d
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xd60	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xd64	
private:
	[[maybe_unused]] uint8_t __pad0d65[0x3]; // 0xd65
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xd68	
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // 0xd6c	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	// MNetworkPriority "32"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd70	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0xf78	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0xf98	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1118	
	bool m_bHasShopOpen; // 0x1130	
private:
	[[maybe_unused]] uint8_t __pad1131[0x3]; // 0x1131
public:
	ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1134	
private:
	[[maybe_unused]] uint8_t __pad1138[0xc]; // 0x1138
public:
	float m_flLastRegenThinkTime; // 0x1144	
	float m_flCitadelDamageAccumulator; // 0x1148	
private:
	[[maybe_unused]] uint8_t __pad114c[0x2c]; // 0x114c
public:
	int32_t m_nBulletsFiredAtUs; // 0x1178	
	int32_t m_nBulletsHitOnUs; // 0x117c	
	int32_t m_nHeadshotsOnUs; // 0x1180	
	GameTime_t m_flLastGameStatsRecorded; // 0x1184	
	float m_flUnusedGoldRemainder; // 0x1188	
	float m_flUnusedAbilityRemainder; // 0x118c	
	int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1190	
	int32_t m_nBulletsHitOnEnemyHeroes; // 0x1194	
	int32_t m_nHeadshotsOnEnemyHeroes; // 0x1198	
	int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x119c	
	int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x11a0	
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // 0x11a4	
	bool m_bHasOverrideSpawnPos; // 0x11a8	
private:
	[[maybe_unused]] uint8_t __pad11a9[0x3]; // 0x11a9
public:
	Vector m_vecOverrideSpawnPos; // 0x11ac	
	int32_t m_iKillStreak; // 0x11b8	
	bool m_bHasStartedPlaying; // 0x11bc	
private:
	[[maybe_unused]] uint8_t __pad11bd[0x3]; // 0x11bd
public:
	CHandle< CBaseEntity > m_hRevengeTarget; // 0x11c0	
private:
	[[maybe_unused]] uint8_t __pad11c4[0xc]; // 0x11c4
public:
	GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x11d0	
	GameTime_t m_flLastTimeLookedAtByDirector; // 0x11d4	
	CTakeDamageResult m_ragdollDamage; // 0x11d8	
	CUtlVector< CHandle< CBaseEntity > > m_vecThreats; // 0x11f0	
private:
	[[maybe_unused]] uint8_t __pad1208[0x12c]; // 0x1208
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor; // 0x1334	
	bool m_bCanBecomeRagdoll; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1339[0x3]; // 0x1339
public:
	float m_blindUntilTime; // 0x133c	
	float m_blindStartTime; // 0x1340	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped; // 0x1344	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity; // 0x1345	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl; // 0x1346	
	bool m_bLastMoveWasAnimGraph; // 0x1347	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart; // 0x1348	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd; // 0x134c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flPredSlowSpeed; // 0x1350	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedStart[4]; // 0x1354	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedEnd[4]; // 0x1364	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flSlowSpeed[4]; // 0x1374	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x1384	
	bool m_bPreventAbilityLearning; // 0x1388	
private:
	[[maybe_unused]] uint8_t __pad1389[0x3]; // 0x1389
public:
	int32_t m_iCurSlowSlot; // 0x138c	
private:
	[[maybe_unused]] uint8_t __pad1390[0x4]; // 0x1390
public:
	ParticleIndex_t m_nRespawnParticleIndex; // 0x1394	
	ParticleIndex_t m_nShoppingParticle; // 0x1398	
private:
	[[maybe_unused]] uint8_t __pad139c[0x2c]; // 0x139c
public:
	CCitadelPlayerBot* m_pBot; // 0x13c8	
private:
	[[maybe_unused]] uint8_t __pad13d0[0x168]; // 0x13d0
public:
	Vector m_vShootTestOffsetStanding; // 0x1538	
	Vector m_vShootTestOffsetCrouching; // 0x1544	
	GameTime_t m_leanStartTime; // 0x1550	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xab0
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xab8
};


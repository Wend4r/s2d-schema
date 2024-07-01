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
// Size: 0x1538
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
	int32_t m_arrGoldSources[31]; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "SourceTVExclusive"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angClientCamera; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "RemotePlayersOnly"
	// MNetworkEncoder "qangle"
	// MNetworkBitCount "11"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0xcc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	QAngle m_angLockedEyeAngles; // 0xcd4	
	// MNetworkEnable
	int32_t m_nLevel; // 0xce0	
	// MNetworkEnable
	int32_t m_nCurrencies[4]; // 0xce4	
	// MNetworkEnable
	int32_t m_nSpentCurrencies[4]; // 0xcf4	
	// MNetworkEnable
	GameTime_t m_flRespawnTime; // 0xd04	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	bool m_bInRegenerationZone; // 0xd08	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInItemShopZone; // 0xd09	
private:
	[[maybe_unused]] uint8_t __pad0d0a[0x2]; // 0xd0a
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecFullSellPriceItems; // 0xd10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CNetworkUtlVectorBase< FullSellPriceAbilityUpgrades_t > m_vecFullSellPriceAbilityUpgrades; // 0xd28	
	// MNetworkEnable
	bool m_bNetworkDisconnected; // 0xd40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bHasIncomingThreats; // 0xd41	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bLearningAbility; // 0xd42	
private:
	[[maybe_unused]] uint8_t __pad0d43[0x1]; // 0xd43
public:
	// MNetworkEnable
	int32_t m_nFlashStartTick; // 0xd44	
	// MNetworkEnable
	int32_t m_nFlashMaxStartTick; // 0xd48	
	// MNetworkEnable
	int32_t m_nFlashFadeStartTick; // 0xd4c	
	// MNetworkEnable
	int32_t m_nFlashEndTick; // 0xd50	
	// MNetworkEnable
	int8_t m_nFlashMaxAlpha; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d55[0x3]; // 0xd55
public:
	// MNetworkEnable
	int32_t m_nDeducedLane; // 0xd58	
	// MNetworkEnable
	bool m_bDismissedReportCard; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d5d[0x3]; // 0xd5d
public:
	// MNetworkEnable
	float m_flCurrentHealingAmount; // 0xd60	
	CHandle< CCitadelBaseAbility > m_hAbilityRequiresDebounce; // 0xd64	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	// MNetworkPriority "32"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd68	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelHeroComponent"
	// MNetworkAlias "CCitadelHeroComponent"
	// MNetworkTypeAlias "CCitadelHeroComponent"
	CCitadelHeroComponent m_CCitadelHeroComponent; // 0xf68	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0xf88	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1108	
	bool m_bHasShopOpen; // 0x1120	
private:
	[[maybe_unused]] uint8_t __pad1121[0x3]; // 0x1121
public:
	ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1124	
private:
	[[maybe_unused]] uint8_t __pad1128[0xc]; // 0x1128
public:
	float m_flLastRegenThinkTime; // 0x1134	
	float m_flCitadelDamageAccumulator; // 0x1138	
private:
	[[maybe_unused]] uint8_t __pad113c[0x2c]; // 0x113c
public:
	int32_t m_nBulletsFiredAtUs; // 0x1168	
	int32_t m_nBulletsHitOnUs; // 0x116c	
	int32_t m_nHeadshotsOnUs; // 0x1170	
	GameTime_t m_flLastGameStatsRecorded; // 0x1174	
	float m_flUnusedGoldRemainder; // 0x1178	
	float m_flUnusedAbilityRemainder; // 0x117c	
	int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1180	
	int32_t m_nBulletsHitOnEnemyHeroes; // 0x1184	
	int32_t m_nHeadshotsOnEnemyHeroes; // 0x1188	
	int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x118c	
	int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1190	
	CHandle< CBaseEntity > m_hEnemyHeroClientAimedAtAttackTime; // 0x1194	
	bool m_bHasOverrideSpawnPos; // 0x1198	
private:
	[[maybe_unused]] uint8_t __pad1199[0x3]; // 0x1199
public:
	Vector m_vecOverrideSpawnPos; // 0x119c	
	int32_t m_iKillStreak; // 0x11a8	
	bool m_bHasStartedPlaying; // 0x11ac	
private:
	[[maybe_unused]] uint8_t __pad11ad[0x3]; // 0x11ad
public:
	CHandle< CBaseEntity > m_hRevengeTarget; // 0x11b0	
private:
	[[maybe_unused]] uint8_t __pad11b4[0xc]; // 0x11b4
public:
	GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x11c0	
	GameTime_t m_flLastTimeLookedAtByDirector; // 0x11c4	
private:
	[[maybe_unused]] uint8_t __pad11c8[0x8]; // 0x11c8
public:
	CTakeDamageResult m_ragdollDamage; // 0x11d0	
	CUtlVector< CHandle< CBaseEntity > > m_vecThreats; // 0x11e8	
private:
	[[maybe_unused]] uint8_t __pad1200[0x130]; // 0x1200
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CMsgLaneColor m_eZipLineLaneColor; // 0x1330	
	bool m_bCanBecomeRagdoll; // 0x1334	
private:
	[[maybe_unused]] uint8_t __pad1335[0x3]; // 0x1335
public:
	float m_blindUntilTime; // 0x1338	
	float m_blindStartTime; // 0x133c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementClipped; // 0x1340	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDisableGravity; // 0x1341	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAnimGraphMovementDirectAirControl; // 0x1342	
	bool m_bLastMoveWasAnimGraph; // 0x1343	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedStart; // 0x1344	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flPredTimeSlowedEnd; // 0x1348	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flPredSlowSpeed; // 0x134c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedStart[4]; // 0x1350	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flTimeSlowedEnd[4]; // 0x1360	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flSlowSpeed[4]; // 0x1370	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTime_t m_flSprintAnimSuppressEndTime; // 0x1380	
	bool m_bPreventAbilityLearning; // 0x1384	
private:
	[[maybe_unused]] uint8_t __pad1385[0x3]; // 0x1385
public:
	int32_t m_iCurSlowSlot; // 0x1388	
private:
	[[maybe_unused]] uint8_t __pad138c[0x4]; // 0x138c
public:
	ParticleIndex_t m_nRespawnParticleIndex; // 0x1390	
	ParticleIndex_t m_nShoppingParticle; // 0x1394	
private:
	[[maybe_unused]] uint8_t __pad1398[0x30]; // 0x1398
public:
	CCitadelPlayerBot* m_pBot; // 0x13c8	
	
	// Datamap fields:
	// CCitadelPlayer_CameraServices m_pCameraServices; // 0xab0
	// CCitadelPlayer_MovementServices m_pMovementServices; // 0xab8
};


#pragma once

#include <cstdint>

struct HeroID_t;
struct HeroStatsUI_t;
struct HeroStatsDisplay_t;
struct CitadelStatsDisplay_t;
struct CFootstepTableHandle;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataAssociatedFile
// MVDataOverlayType
struct CitadelHeroData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< HeroAnimGraphDefaultValueOverride_t > m_vecAnimGraphDefaultValueOverrides; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0020[0x8]; // 0x20
public:
	HeroID_t m_HeroID; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	// MPropertyStartGroup "Screen Space Particle FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDamageTakenParticle; // 0x30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hGroundDamageTakenParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hDeathParticle; // 0x1f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hLowHealthParticle; // 0x2d0	
	// MPropertyStartGroup "Visuals"
	CPanoramaImageName m_strSelectionImage; // 0x3b0	
	CPanoramaImageName m_strIconImageSmall; // 0x3c0	
	CPanoramaImageName m_strIconHeroCard; // 0x3d0	
	CPanoramaImageName m_strMinimapImage; // 0x3e0	
	CPanoramaImageName m_strTopBarImage; // 0x3f0	
	CPanoramaImageName m_strTopBarVertical; // 0x400	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hRespawnParticle; // 0x410	
	Color m_colorUI; // 0x4f0	
	Color m_colorGlowFriendly; // 0x4f4	
	Color m_colorGlowEnemy; // 0x4f8	
	Color m_colorGlowTeam1; // 0x4fc	
	Color m_colorGlowTeam2; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // 0x508	
	int32_t m_nModelSkin; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	// MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x5f0	
	// MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strMainOnlyModelName; // 0x6d0	
	// MPropertyStartGroup "UI"
	uint64_t m_iAddedTime; // 0x7b0	
	// MPropertyDescription "AnimGraph for UI"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphVariation > > m_sAG2VariationName; // 0x7b8	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIPortraitMap; // 0x898	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIShoppingMap; // 0x8a0	
	HeroStatsUI_t m_heroStatsUI; // 0x8a8	
	HeroStatsDisplay_t m_heroStatsDisplay; // 0x8d8	
	CitadelStatsDisplay_t m_ShopStatDisplay; // 0x968	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xa10	
	CSoundEventName m_strLastHitSound; // 0xa20	
	CSoundEventName m_strRosterSelectedSound; // 0xa30	
	CSoundEventName m_strRosterRemovedSound; // 0xa40	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xa50	
	CSoundEventName m_strLowHealthSound; // 0xa60	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xa70	
	CSoundEventName m_strMovementLoop; // 0xa80	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xa90	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xa98	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xb78	
	float m_flFootstepSoundTravelDistanceMeters; // 0xc58	
	float m_flStealthSpeedMetersPerSecond; // 0xc5c	
	float m_flStepSoundTime; // 0xc60	
	float m_flStepSoundTimeSprinting; // 0xc64	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0xc68	
	float m_flCollisionHeight; // 0xc6c	
	float m_flStepHeight; // 0xc70	
	bool m_bInDevelopment; // 0xc74	
	bool m_bAssignedPlayersOnly; // 0xc75	
	bool m_bBotSelectable; // 0xc76	
	bool m_bNewPlayerRecommended; // 0xc77	
	bool m_bLaneTestingRecommended; // 0xc78	
	bool m_bNeedsTesting; // 0xc79	
	bool m_bLimitedTesting; // 0xc7a	
	bool m_bDisabled; // 0xc7b	
	bool m_bPlayerSelectable; // 0xc7c	
	bool m_bAvailableInHeroLabs; // 0xc7d	
private:
	[[maybe_unused]] uint8_t __pad0c7e[0x2]; // 0xc7e
public:
	int32_t m_nComplexity; // 0xc80	
	int32_t m_nReadability; // 0xc84	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0xc88	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0xc8c	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0xc90	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0xc94	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0xc98	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0xc9c	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0xca0	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cf0[0x18]; // 0xcf0
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0xd08	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0xd30	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0xd58	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0xd80	
private:
	[[maybe_unused]] uint8_t __pad0d98[0x70]; // 0xd98
public:
	CUtlVector< CSubclassName< 4 > > m_RecommendedAbilityOrder; // 0xe08	
private:
	[[maybe_unused]] uint8_t __pad0e20[0x18]; // 0xe20
public:
	EAbilityResourceType m_eAbilityResourceType; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e3c[0x1c]; // 0xe3c
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0xe58	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0xe80	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0xea8	
};


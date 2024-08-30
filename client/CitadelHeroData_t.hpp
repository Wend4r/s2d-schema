#pragma once

#include <cstdint>

struct HeroID_t;
struct HeroStatsUI_t;
struct HeroStatsDisplay_t;
struct CitadelStatsDisplay_t;
struct CitadelCameraOperationsSequence_t;
struct CFootstepTableHandle;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12a0
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
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_hAmbientParticle; // 0x4f8	
	CUtlVector< AmbientParticleSettings_t > m_vecAmbientParticleSettings; // 0x5d8	
	Color m_colorGlowFriendly; // 0x5f0	
	Color m_colorGlowEnemy; // 0x5f4	
	Color m_colorGlowTeam1; // 0x5f8	
	Color m_colorGlowTeam2; // 0x5fc	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strModelName; // 0x600	
	int32_t m_nModelSkin; // 0x6e0	
private:
	[[maybe_unused]] uint8_t __pad06e4[0x4]; // 0x6e4
public:
	// MPropertyDescription "If specified, this model will be used in steam public universe only."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strPublicModelName; // 0x6e8	
	// MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x7c8	
	// MPropertyStartGroup "UI"
	// MPropertyDescription "AnimGraph for UI"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIAnimGraphModelBinding > > m_strUIAnimGraph; // 0x8a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIAnimGraphModelBinding > > m_strUIShopAnimGraph; // 0x988	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIPortraitMap; // 0xa68	
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIShoppingMap; // 0xa70	
	HeroStatsUI_t m_heroStatsUI; // 0xa78	
	HeroStatsDisplay_t m_heroStatsDisplay; // 0xaa8	
	CitadelStatsDisplay_t m_ShopStatDisplay; // 0xb38	
	// MPropertyStartGroup "Zipline Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0xbe0	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0xc60	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0xce0	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0xd60	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xde0	
	CSoundEventName m_strLastHitSound; // 0xdf0	
	CSoundEventName m_strRosterSelectedSound; // 0xe00	
	CSoundEventName m_strRosterRemovedSound; // 0xe10	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xe20	
	CSoundEventName m_strLowHealthSound; // 0xe30	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xe40	
	CSoundEventName m_strMovementLoop; // 0xe50	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xe60	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xe68	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xf48	
	float m_flFootstepSoundTravelDistanceMeters; // 0x1028	
	float m_flStealthSpeedMetersPerSecond; // 0x102c	
	float m_flStepSoundTime; // 0x1030	
	float m_flStepSoundTimeSprinting; // 0x1034	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0x1038	
	float m_flCollisionHeight; // 0x103c	
	float m_flStepHeight; // 0x1040	
	bool m_bInDevelopment; // 0x1044	
	bool m_bAssignedPlayersOnly; // 0x1045	
	bool m_bBotSelectable; // 0x1046	
	bool m_bNewPlayerRecommended; // 0x1047	
	bool m_bLaneTestingRecommended; // 0x1048	
	bool m_bNeedsTesting; // 0x1049	
	bool m_bLimitedTesting; // 0x104a	
	bool m_bDisabled; // 0x104b	
	bool m_bPlayerSelectable; // 0x104c	
private:
	[[maybe_unused]] uint8_t __pad104d[0x3]; // 0x104d
public:
	int32_t m_nComplexity; // 0x1050	
	int32_t m_nReadability; // 0x1054	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0x1058	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0x105c	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0x1060	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0x1064	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0x1068	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0x106c	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0x1070	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0x1098	
private:
	[[maybe_unused]] uint8_t __pad10c0[0x18]; // 0x10c0
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x10d8	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0x1100	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0x1128	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0x1150	
private:
	[[maybe_unused]] uint8_t __pad1168[0x70]; // 0x1168
public:
	CUtlVector< CSubclassName< 4 > > m_RecommendedAbilityOrder; // 0x11d8	
private:
	[[maybe_unused]] uint8_t __pad11f0[0x18]; // 0x11f0
public:
	EAbilityResourceType m_eAbilityResourceType; // 0x1208	
private:
	[[maybe_unused]] uint8_t __pad120c[0x1c]; // 0x120c
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0x1228	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0x1250	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0x1278	
};


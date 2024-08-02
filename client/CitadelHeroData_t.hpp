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
// Size: 0x1258
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
	// MPropertyAttributeEditor "AssetBrowse( vmap )"
	CUtlString m_strUIPortraitMap; // 0x988	
	HeroStatsUI_t m_heroStatsUI; // 0x990	
	HeroStatsDisplay_t m_heroStatsDisplay; // 0x9c0	
	CitadelStatsDisplay_t m_ShopStatDisplay; // 0xa50	
	// MPropertyStartGroup "Zipline Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0xae8	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0xb68	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0xbe8	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0xc68	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xce8	
	CSoundEventName m_strLastHitSound; // 0xcf8	
	CSoundEventName m_strRosterSelectedSound; // 0xd08	
	CSoundEventName m_strRosterRemovedSound; // 0xd18	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xd28	
	CSoundEventName m_strLowHealthSound; // 0xd38	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xd48	
	CSoundEventName m_strMovementLoop; // 0xd58	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xd68	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xd70	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hVOEventScript; // 0xe50	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xf30	
	float m_flFootstepSoundTravelDistanceMeters; // 0x1010	
	float m_flStealthSpeedMetersPerSecond; // 0x1014	
	float m_flStepSoundTime; // 0x1018	
	float m_flStepSoundTimeSprinting; // 0x101c	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0x1020	
	float m_flCollisionHeight; // 0x1024	
	float m_flStepHeight; // 0x1028	
	bool m_bInDevelopment; // 0x102c	
	bool m_bAssignedPlayersOnly; // 0x102d	
	bool m_bBotSelectable; // 0x102e	
	bool m_bNewPlayerRecommended; // 0x102f	
	bool m_bLaneTestingRecommended; // 0x1030	
	bool m_bNeedsTesting; // 0x1031	
	bool m_bLimitedTesting; // 0x1032	
	bool m_bDisabled; // 0x1033	
	bool m_bPlayerSelectable; // 0x1034	
private:
	[[maybe_unused]] uint8_t __pad1035[0x3]; // 0x1035
public:
	int32_t m_nComplexity; // 0x1038	
	int32_t m_nReadability; // 0x103c	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0x1040	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0x1044	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0x1048	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0x104c	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0x1050	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0x1054	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0x1058	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0x1080	
private:
	[[maybe_unused]] uint8_t __pad10a8[0x18]; // 0x10a8
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x10c0	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0x10e8	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0x1110	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0x1138	
private:
	[[maybe_unused]] uint8_t __pad1150[0x70]; // 0x1150
public:
	EAbilityResourceType m_eAbilityResourceType; // 0x11c0	
private:
	[[maybe_unused]] uint8_t __pad11c4[0x1c]; // 0x11c4
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0x11e0	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0x1208	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0x1230	
};


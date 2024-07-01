#pragma once

#include <cstdint>

struct HeroID_t;
struct HeroStatsUI_t;
struct HeroStatsDisplay_t;
struct CitadelCameraOperationsSequence_t;
struct CFootstepTableHandle;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x11b0
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
	// MPropertyStartGroup "Zipline Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0xa50	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0xad0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0xb50	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0xbd0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDeathSound; // 0xc50	
	CSoundEventName m_strRosterSelectedSound; // 0xc60	
	CSoundEventName m_strRosterRemovedSound; // 0xc70	
	CSoundEventName m_strFootstepSoundEventDefault; // 0xc80	
	CSoundEventName m_strLowHealthSound; // 0xc90	
	CSoundEventName m_strHeroSpecificLowHealthSound; // 0xca0	
	CSoundEventName m_strMovementLoop; // 0xcb0	
	// MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
	CFootstepTableHandle m_hFootstepSounds; // 0xcc0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGameSoundEventScript; // 0xcc8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hVOEventScript; // 0xda8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVSoundEventScriptList > > m_hGeneratedVOEventScript; // 0xe88	
	float m_flFootstepSoundTravelDistanceMeters; // 0xf68	
	float m_flStealthSpeedMetersPerSecond; // 0xf6c	
	float m_flStepSoundTime; // 0xf70	
	float m_flStepSoundTimeSprinting; // 0xf74	
	// MPropertyStartGroup
	float m_flCollisionRadius; // 0xf78	
	float m_flCollisionHeight; // 0xf7c	
	float m_flStepHeight; // 0xf80	
	bool m_bInDevelopment; // 0xf84	
	bool m_bAssignedPlayersOnly; // 0xf85	
	bool m_bBotSelectable; // 0xf86	
	bool m_bNewPlayerRecommended; // 0xf87	
	bool m_bLaneTestingRecommended; // 0xf88	
	bool m_bNeedsTesting; // 0xf89	
	bool m_bLimitedTesting; // 0xf8a	
	bool m_bDisabled; // 0xf8b	
	bool m_bPlayerSelectable; // 0xf8c	
private:
	[[maybe_unused]] uint8_t __pad0f8d[0x3]; // 0xf8d
public:
	int32_t m_nComplexity; // 0xf90	
	int32_t m_nReadability; // 0xf94	
	// MPropertyStartGroup "Low Health Settings"
	// MPropertyDescription "Percentage of health to be considered low health"
	// MPropertyAttributeRange "0 1"
	float m_flMinLowHealthPercentage; // 0xf98	
	// MPropertyDescription "Percentage of health to be considered low health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxLowHealthPercentage; // 0xf9c	
	// MPropertyDescription "Percentage of health to be considered mid health"
	// MPropertyAttributeRange "0 1"
	float m_flMinMidHealthPercentage; // 0xfa0	
	// MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
	// MPropertyAttributeRange "0 1"
	float m_flMaxMidHealthPercentage; // 0xfa4	
	// MPropertyDescription "Min Max Health for Remapped Value"
	float m_flMinHealthForThreshold; // 0xfa8	
	// MPropertyDescription "Max Max Health for remapped value"
	float m_flMaxHealthForThreshold; // 0xfac	
	// MPropertyStartGroup
	CUtlOrderedMap< EStatsType, float32 > m_mapStartingStats; // 0xfb0	
	CUtlOrderedMap< EStatsType, HeroScalingStat_t > m_mapScalingStats; // 0xfd8	
private:
	[[maybe_unused]] uint8_t __pad1000[0x18]; // 0x1000
public:
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x1018	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapWIPAbilities; // 0x1040	
	CUtlOrderedMap< EItemSlotTypes_t, ItemSlotInfo_t > m_mapItemSlotInfo; // 0x1068	
	CUtlVector< CSubclassName< 4 > > m_RecommendedUpgrades; // 0x1090	
private:
	[[maybe_unused]] uint8_t __pad10a8[0x70]; // 0x10a8
public:
	EAbilityResourceType m_eAbilityResourceType; // 0x1118	
private:
	[[maybe_unused]] uint8_t __pad111c[0x1c]; // 0x111c
public:
	CUtlOrderedMap< EModifierValue, float32 > m_mapStandardLevelUpUpgrades; // 0x1138	
	CUtlOrderedMap< int32, HeroLevel_t > m_mapLevelInfo; // 0x1160	
	CUtlOrderedMap< EItemSlotTypes_t, CUtlVector< HeroPurchaseBonus_t > > m_mapPurchaseBonuses; // 0x1188	
};


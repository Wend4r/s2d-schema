#pragma once

#include <cstdint>

struct IncompatibleFilter_t;
struct CCitadelWeaponInfo;
struct ProjectileInfo_t;
struct DeploymentInfo_t;
struct AbilityTooltipDetails_t;
struct CitadelAbilityHUDPanel_t;
struct AdditionalAbilities_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataOverlayType
class CitadelAbilityVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Meta"
	EAbilityType_t m_eAbilityType; // 0x28	
	// MPropertyStartGroup "Meta"
	EItemSlotTypes_t m_eItemSlotType; // 0x29	
	bool m_bDisabled; // 0x2a	
	bool m_bInDevelopment; // 0x2b	
	bool m_bStartTrained; // 0x2c	
private:
	[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
public:
	int32_t m_iMaxLevel; // 0x30	
	int32_t m_nAbilityPointsCost; // 0x34	
	int32_t m_nAbillityUnlocksCost; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	uint64_t m_iUpdateTime; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
public:
	// MPropertyStartGroup "Behavior"
	EAbilityBehavior_t m_nAbilityBehaviors; // 0x50	
	EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58	
	EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeAngle; // 0x60	
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	float m_flTargetingConeHalfWidth; // 0x64	
	// MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
	// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
	bool m_bIncludeExtra2DCone; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
public:
	EAbilityActivation_t m_eAbilityActivation; // 0x6c	
	// MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
	InputBitMask_t m_TriggerButtonPreReqButton; // 0x70	
	// MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
	InputBitMask_t m_TriggerButtonOverride; // 0x78	
	EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	CBitVecEnum< EModifierState > m_bitsInterruptingStates; // 0x84	
	IncompatibleFilter_t m_IncompatibleFilter; // 0x98	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xa8	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xac	
	// MPropertyDescription "During post-cast, what modifier states are set."
	CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // 0xb0	
	// MPropertyDescription "This ability provides these types of ability target effects."
	ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xc4	
	bool m_bShowTargetingPreviewWhileChanneling; // 0xc8	
	bool m_bShowTargetingPreviewWhileCasting; // 0xc9	
private:
	[[maybe_unused]] uint8_t __pad00ca[0x6]; // 0xca
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "Weapon Info"
	CCitadelWeaponInfo m_WeaponInfo; // 0xd0	
	// MPropertyFriendlyName "Projectile Info"
	ProjectileInfo_t m_projectileInfo; // 0x728	
	// MPropertyFriendlyName "Deployment Info"
	DeploymentInfo_t m_deploymentInfo; // 0xa98	
	// MPropertyStartGroup
	CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t > m_mapAbilityProperties; // 0xc78	
	CUtlVector< CSubclassName< 4 > > m_vecDependentAbilities; // 0xca0	
	CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // 0xcb8	
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x20]; // 0xcd0
public:
	// MPropertyStartGroup "AnimGraph"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strCastAnimGraphParam; // 0xcf0	
	// MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
	CUtlString m_strSelectionNameOverride; // 0xcf8	
	CUtlString m_strCastAnimSequenceName; // 0xd00	
	// MPropertyStartGroup "UI"
	// MPropertySuppressExpr "m_bIsSignatureAbility == false"
	AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xd08	
	CUtlString m_strCSSClass; // 0xd38	
	CPanoramaImageName m_strAbilityImage; // 0xd40	
	CUtlString m_strMoviePreviewPath; // 0xd50	
	CitadelAbilityHUDPanel_t m_HUDPanel; // 0xd58	
	bool m_bShowInPassiveItemsArea; // 0xd90	
	bool m_bForceShowHUDPanel; // 0xd91	
private:
	[[maybe_unused]] uint8_t __pad0d92[0x6]; // 0xd92
public:
	// MPropertyFriendlyName "Additional Abilities"
	AdditionalAbilities_t m_additionalAbilities; // 0xd98	
	CUtlString m_strCancelAbilityKey; // 0xdb8	
	CUtlString m_strSecondaryStatName; // 0xdc0	
	// MPropertyStartGroup "Camera"
	// MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
	CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xdc8	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
	bool m_bEndCastStartSequenceOnCastComplete; // 0xe48	
private:
	[[maybe_unused]] uint8_t __pad0e49[0x7]; // 0xe49
public:
	// MPropertyDescription "Camera sequence that plays when casting completes."
	CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xe50	
	// MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
	CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xed0	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
	bool m_bEndChannelStartSequenceOnChannelComplete; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	float m_flCameraPreviewOffset; // 0xf54	
	float m_flCameraPreviewDistance; // 0xf58	
	float m_flCameraPreviewSpeed; // 0xf5c	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Preview particle attaching to the caster before cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // 0xf60	
	// MPropertyDescription "Preview path particle shows ability's custom path"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // 0x1040	
	// MPropertyDescription "Particle attaching to the caster on cast event"
	CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // 0x1120	
	// MPropertyDescription "Trace particle when hit an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // 0x1148	
	// MPropertyDescription "Trace particle when missed an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // 0x1228	
	// MPropertyDescription "Preview particle on attaching to targets of this ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // 0x1308	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSelectedSound; // 0x13e8	
	CSoundEventName m_strUnselectedSound; // 0x13f8	
	CSoundEventName m_strSelectedLoopSound; // 0x1408	
	CSoundEventName m_strCastSound; // 0x1418	
	CSoundEventName m_strChannelSound; // 0x1428	
	CSoundEventName m_strChannelLoopSound; // 0x1438	
	CSoundEventName m_strCastDelaySound; // 0x1448	
	CSoundEventName m_strCastDelayLoopSound; // 0x1458	
	// MPropertyDescription "plays for local player attacker dealing damage with this ability"
	CSoundEventName m_strHitConfirmationSound; // 0x1468	
	// MPropertyDescription "plays for local player victim taking damage from this ability"
	CSoundEventName m_strDamageTakenSound; // 0x1478	
	CSoundEventName m_strAbilityOffCooldownSound; // 0x1488	
	CSoundEventName m_strAbilityChargeReadySound; // 0x1498	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // 0x14a8	
	CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // 0x14b8	
	CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // 0x14c8	
};


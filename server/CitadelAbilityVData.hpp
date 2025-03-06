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
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15c8
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
	[[maybe_unused]] uint8_t __pad0048[0x4]; // 0x48
public:
	// MPropertyStartGroup "Behavior"
	CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits; // 0x4c	
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
	IncompatibleFilter_t m_IncompatibleFilter; // 0xa0	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb4	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb8	
	// MPropertyDescription "During post-cast, what modifier states are set."
	CBitVecEnum< EModifierState > m_bitsPostCastEnabledStateMask; // 0xbc	
	// MPropertyDescription "This ability provides these types of ability target effects."
	ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd8	
	// MPropertyDescription "Scale Damage to Objectives by this amount"
	float m_flBossDamageScale; // 0xdc	
	bool m_bShowTargetingPreviewWhileChanneling; // 0xe0	
	bool m_bShowTargetingPreviewWhileCasting; // 0xe1	
private:
	[[maybe_unused]] uint8_t __pad00e2[0x6]; // 0xe2
public:
	// MPropertyStartGroup
	// MPropertyFriendlyName "Weapon Info"
	CCitadelWeaponInfo m_WeaponInfo; // 0xe8	
	// MPropertyFriendlyName "Projectile Info"
	ProjectileInfo_t m_projectileInfo; // 0x778	
	// MPropertyFriendlyName "Deployment Info"
	DeploymentInfo_t m_deploymentInfo; // 0xb18	
	// MPropertyStartGroup
	CUtlOrderedMap< CUtlString, CitadelAbilityProperty_t > m_mapAbilityProperties; // 0xd00	
	CUtlVector< CSubclassName< 4 > > m_vecDependentAbilities; // 0xd28	
	CUtlVector< AbilityUpgrade_t > m_vecAbilityUpgrades; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x20]; // 0xd58
public:
	// MPropertyStartGroup "AnimGraph1"
	CGlobalSymbol m_strCastAnimGraphParam; // 0xd78	
	// MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
	CUtlString m_strSelectionNameOverride; // 0xd80	
	CUtlString m_strCastAnimSequenceName; // 0xd88	
	// MPropertyStartGroup "AnimGraph2"
	// MPropertyDescription "When true, suppress the out of combat anim state for 2s on cast."
	bool m_bSuppressOutOfCombatOnCast; // 0xd90	
	// MPropertyDescription "When true, suppress the out of combat anim state while channeling and for 2s after."
	bool m_bSuppressOutOfCombatWhileChanneling; // 0xd91	
private:
	[[maybe_unused]] uint8_t __pad0d92[0x6]; // 0xd92
public:
	// MPropertyFriendlyName "action_source value when doing an action"
	// MPropertyDescription "By default uses the ability name.  Set this to use a custom name."
	CGlobalSymbol m_strAG2SourceName; // 0xd98	
	// MPropertyFriendlyName "Casting action_state value"
	// MPropertyDescription "Value to set "action_state" to set when casting. "action_source" will be set to this ability's name"
	CGlobalSymbol m_strAG2CastingAction; // 0xda0	
	// MPropertyFriendlyName "Channeling action_state value"
	// MPropertyDescription "Value to set "action_state" to set when channeling. "action_source" will be set to this ability's name"
	CGlobalSymbol m_strAG2ChannelingAction; // 0xda8	
	// MPropertyStartGroup "UI"
	// MPropertySuppressExpr "m_bIsSignatureAbility == false"
	AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xdb0	
	CUtlString m_strCSSClass; // 0xde0	
	CPanoramaImageName m_strAbilityImage; // 0xde8	
	CUtlString m_strMoviePreviewPath; // 0xdf8	
	CitadelAbilityHUDPanel_t m_HUDPanel; // 0xe00	
	bool m_bShowInPassiveItemsArea; // 0xe38	
	bool m_bForceShowHUDPanel; // 0xe39	
	bool m_bUsesFlightControls; // 0xe3a	
private:
	[[maybe_unused]] uint8_t __pad0e3b[0x5]; // 0xe3b
public:
	CUtlString m_strFlyUpLocString; // 0xe40	
	CUtlString m_strFlyDownLocString; // 0xe48	
	// MPropertyFriendlyName "Additional Abilities"
	AdditionalAbilities_t m_additionalAbilities; // 0xe50	
	CUtlString m_strSecondaryStatName; // 0xe70	
	// MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
	CUtlString m_strCastButtonLocToken; // 0xe78	
	// MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
	CUtlString m_strAltCastButtonLocToken; // 0xe80	
	// MPropertyStartGroup "Camera"
	// MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
	CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xe88	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
	bool m_bEndCastStartSequenceOnCastComplete; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f11[0x7]; // 0xf11
public:
	// MPropertyDescription "Camera sequence that plays when casting completes."
	CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xf18	
	// MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
	CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xfa0	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
	bool m_bEndChannelStartSequenceOnChannelComplete; // 0x1028	
private:
	[[maybe_unused]] uint8_t __pad1029[0x3]; // 0x1029
public:
	float m_flCameraPreviewOffset; // 0x102c	
	float m_flCameraPreviewDistance; // 0x1030	
	float m_flCameraPreviewSpeed; // 0x1034	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Preview particle attaching to the caster before cast"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_previewParticle; // 0x1038	
	// MPropertyDescription "Name of particle control point config to use for preview particle effect (empty means use 'preview' config)"
	CUtlString m_strPreviewParticleEffectConfig; // 0x1118	
	// MPropertyDescription "Preview path particle shows ability's custom path"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewPathParticle; // 0x1120	
	// MPropertyDescription "Particle attaching to the caster on cast event"
	CUtlOrderedMap< AbilityCastEvent_t, CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > > m_mapCastEventParticles; // 0x1200	
	// MPropertyDescription "Trace particle when hit an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotHitParticle; // 0x1228	
	// MPropertyDescription "Trace particle when missed an enemy with targeted ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_skillshotMissParticle; // 0x1308	
	// MPropertyDescription "Preview particle on attaching to targets of this ability"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingPreviewParticle; // 0x13e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strSelectedSound; // 0x14c8	
	CSoundEventName m_strUnselectedSound; // 0x14d8	
	CSoundEventName m_strSelectedLoopSound; // 0x14e8	
	CSoundEventName m_strCastSound; // 0x14f8	
	CSoundEventName m_strChannelSound; // 0x1508	
	CSoundEventName m_strChannelLoopSound; // 0x1518	
	CSoundEventName m_strCastDelaySound; // 0x1528	
	CSoundEventName m_strCastDelayLoopSound; // 0x1538	
	// MPropertyDescription "plays for local player attacker dealing damage with this ability"
	CSoundEventName m_strHitConfirmationSound; // 0x1548	
	// MPropertyDescription "plays for local player victim taking damage from this ability"
	CSoundEventName m_strDamageTakenSound; // 0x1558	
	CSoundEventName m_strAbilityOffCooldownSound; // 0x1568	
	CSoundEventName m_strAbilityChargeReadySound; // 0x1578	
	bool m_bPlayMeepMop; // 0x1588	
private:
	[[maybe_unused]] uint8_t __pad1589[0x7]; // 0x1589
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoChannelModifier; // 0x1590	
	CEmbeddedSubclass< CBaseModifier > m_AutoCastDelayModifier; // 0x15a0	
	CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_AutoIntrinsicModifiers; // 0x15b0	
};


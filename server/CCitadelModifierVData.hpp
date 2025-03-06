#pragma once

#include <cstdint>

struct ParamAndPriority_t;
struct CCitadelModifierResponseRules_t;
struct CitadelCameraOperationsSequence_t;
struct FootstepSound_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CCitadelModifierVData : public CModifierVData
{
public:
	bool m_bIsBuildup; // 0x3f0	
	// MPropertySuppressField
	bool m_bNetworkValuesForStatsPreview; // 0x3f1	
private:
	[[maybe_unused]] uint8_t __pad03f2[0x6]; // 0x3f2
public:
	CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // 0x3f8	
	// MPropertyStartGroup "Kill & Assist Credit"
	bool m_bCasterCountsAsAssister; // 0x410	
private:
	[[maybe_unused]] uint8_t __pad0411[0x3]; // 0x411
public:
	// MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
	float m_flLingeringAssistWindow; // 0x414	
	// MPropertyStartGroup "Time"
	// MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
	bool m_bDurationCanBeTimeScaled; // 0x418	
	bool m_bDurationReducible; // 0x419	
private:
	[[maybe_unused]] uint8_t __pad041a[0x2]; // 0x41a
public:
	// MPropertyDescription "Whose timescale to use when adjusting duration."
	ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x41c	
	// MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
	bool m_bDurationAffectedByEffectiveness; // 0x420	
private:
	[[maybe_unused]] uint8_t __pad0421[0x7]; // 0x421
public:
	// MPropertyStartGroup "AnimGraph1"
	// MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedAnimGraphModifierState_t > m_vecSetAndTrackedAnimGraphParams; // 0x428	
	// MPropertyStartGroup "AnimGraph2"
	// MPropertyFriendlyName "base_state value"
	// MPropertyDescription "The value to set the parameter "base_state" to.  Should be used for states that are common to all heroes (ex. lifted, asleep)."
	ParamAndPriority_t m_AG2BaseState; // 0x440	
	// MPropertyFriendlyName "hero_state value"
	// MPropertyDescription "The value to set the parameter "hero_state" to.  Should be used for states that are custom for the casting hero (ex. icepathing, flamedashing)."
	ParamAndPriority_t m_AG2HeroState; // 0x450	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedBodygroupModifierState_t > m_vecSetAndTrackedBodyGroups; // 0x460	
	// MPropertyStartGroup "UI"
	ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x478	
	bool m_bReverseHudProgressBar; // 0x47c	
private:
	[[maybe_unused]] uint8_t __pad047d[0x3]; // 0x47d
public:
	CUtlString m_strSmallIconCssClass; // 0x480	
	CUtlString m_strHintText; // 0x488	
	CPanoramaImageName m_strHudIcon; // 0x490	
	HudDisplayLocation_t m_eHudDisplayLocation; // 0x4a0	
	ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // 0x4a4	
	// MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
	CUtlString m_strHudMessageText; // 0x4a8	
	// MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
	bool m_bIsHiddenOverhead; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04b1[0x7]; // 0x4b1
public:
	// MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
	CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // 0x4b8	
	// MPropertyStartGroup "Responses"
	CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4d0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x508	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
	bool m_bEndCreatedSequenceOnRemove; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0591[0x7]; // 0x591
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x598	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpiredSound; // 0x620	
	// MPropertyDescription "Overrides the default footstep. The footstep with the greatest Priority is selected. It must have a priority greater than -1 to be selected!"
	FootstepSound_t m_FootstepOverride; // 0x630	
	// MPropertyDescription "Plays alongside the default footstep."
	CSoundEventName m_FootstepAdditional; // 0x648	
};


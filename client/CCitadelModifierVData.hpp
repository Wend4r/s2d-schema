#pragma once

#include <cstdint>

struct CCitadelModifierResponseRules_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadelModifierVData : public CModifierVData
{
public:
	bool m_bIsBuildup; // 0x3e0	
	// MPropertySuppressField
	bool m_bNetworkValuesForStatsPreview; // 0x3e1	
private:
	[[maybe_unused]] uint8_t __pad03e2[0x6]; // 0x3e2
public:
	CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // 0x3e8	
	// MPropertyStartGroup "Kill & Assist Credit"
	bool m_bCasterCountsAsAssister; // 0x400	
private:
	[[maybe_unused]] uint8_t __pad0401[0x3]; // 0x401
public:
	// MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
	float m_flLingeringAssistWindow; // 0x404	
	// MPropertyStartGroup "Time"
	// MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
	bool m_bDurationCanBeTimeScaled; // 0x408	
	bool m_bDurationReducible; // 0x409	
private:
	[[maybe_unused]] uint8_t __pad040a[0x2]; // 0x40a
public:
	// MPropertyDescription "Whose timescale to use when adjusting duration."
	ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x40c	
	// MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
	bool m_bDurationAffectedByEffectiveness; // 0x410	
private:
	[[maybe_unused]] uint8_t __pad0411[0x7]; // 0x411
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedAnimGraphModifierState_t > m_vecSetAndTrackedAnimGraphParams; // 0x418	
	// MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedBodygroupModifierState_t > m_vecSetAndTrackedBodyGroups; // 0x430	
	// MPropertyStartGroup "UI"
	ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x448	
	bool m_bReverseHudProgressBar; // 0x44c	
private:
	[[maybe_unused]] uint8_t __pad044d[0x3]; // 0x44d
public:
	CUtlString m_strSmallIconCssClass; // 0x450	
	CUtlString m_strHintText; // 0x458	
	HudDisplayLocation_t m_eHudDisplayLocation; // 0x460	
private:
	[[maybe_unused]] uint8_t __pad0464[0x4]; // 0x464
public:
	// MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
	CUtlString m_strHudMessageText; // 0x468	
	// MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
	bool m_bIsHiddenOverhead; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0471[0x7]; // 0x471
public:
	// MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
	CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // 0x478	
	// MPropertyStartGroup "Responses"
	CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x490	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x4c8	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
	bool m_bEndCreatedSequenceOnRemove; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x7]; // 0x549
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x550	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sExpiredSound; // 0x5d0	
};


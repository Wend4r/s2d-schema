#pragma once

#include <cstdint>

struct CCitadelModifierResponseRules_t;
struct CitadelCameraOperationsSequence_t;
struct FootstepSound_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x638
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
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedAnimGraphModifierState_t > m_vecSetAndTrackedAnimGraphParams; // 0x428	
	// MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
	CUtlVector< CCitadelTrackedBodygroupModifierState_t > m_vecSetAndTrackedBodyGroups; // 0x440	
	// MPropertyStartGroup "UI"
	ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x458	
	bool m_bReverseHudProgressBar; // 0x45c	
private:
	[[maybe_unused]] uint8_t __pad045d[0x3]; // 0x45d
public:
	CUtlString m_strSmallIconCssClass; // 0x460	
	CUtlString m_strHintText; // 0x468	
	CPanoramaImageName m_strHudIcon; // 0x470	
	HudDisplayLocation_t m_eHudDisplayLocation; // 0x480	
private:
	[[maybe_unused]] uint8_t __pad0484[0x4]; // 0x484
public:
	// MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
	CUtlString m_strHudMessageText; // 0x488	
	// MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
	bool m_bIsHiddenOverhead; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad0491[0x7]; // 0x491
public:
	// MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
	CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // 0x498	
	// MPropertyStartGroup "Responses"
	CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4b0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x4e8	
	// MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
	bool m_bEndCreatedSequenceOnRemove; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0x7]; // 0x571
public:
	CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x578	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sExpiredSound; // 0x600	
	FootstepSound_t m_FootstepOverride; // 0x610	
	CSoundEventName m_FootstepAdditional; // 0x628	
};


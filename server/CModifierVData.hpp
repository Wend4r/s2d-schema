#pragma once

#include <cstdint>

struct CModifierLevelFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Time"
	CModifierLevelFloat m_flDuration; // 0x28	
	// MPropertyStartGroup "Time"
	// MPropertyDescription "If set, the duration will not get reduced from a refresh with a shorter duration"
	bool m_bKeepMaximumDurationOnRefresh; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0039[0x7]; // 0x39
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Particle system to attach to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleEffect; // 0x40	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for ambient effect (empty means use 'preview' config)"
	CUtlString m_strParticleEffectConfig; // 0x120	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Status Effect to apply to the parent of the modifier"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleStatusEffect; // 0x128	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for status effect (empty means use 'preview' config)"
	CUtlString m_strParticleStatusEffectConfig; // 0x208	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Screen-space particle system to create if the parent of the modifier is the local player"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strScreenParticleEffect; // 0x210	
	// MPropertyStartGroup "Visuals"
	// MPropertyDescription "Name of particle control point config to use for screen-space effect (empty means use 'preview' config)"
	CUtlString m_strScreenParticleEffectConfig; // 0x2f0	
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Priority of this status effect relative to others"
	int32_t m_nStatusEffectPriority; // 0x2f8	
private:
	[[maybe_unused]] uint8_t __pad02fc[0x4]; // 0x2fc
public:
	// MPropertyGroupName "Visuals"
	CUtlVector< ModifierRenderAttribute_t > m_vecRenderAttributes; // 0x300	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sStartSound; // 0x318	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sAmbientLoopingSound; // 0x328	
	// MPropertyGroupName "Sounds"
	ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients; // 0x338	
private:
	[[maybe_unused]] uint8_t __pad033c[0x4]; // 0x33c
public:
	// MPropertyGroupName "Sounds"
	CSoundEventName m_sEndSound; // 0x340	
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nEnabledStateMask; // 0x350	
	// MPropertyGroupName "Scripted Settings"
	CBitVecEnum< EModifierState > m_nDisabledStateMask; // 0x368	
	// MPropertyGroupName "Scripted Settings"
	ModifierAttribute_t m_nAttributes; // 0x380	
private:
	[[maybe_unused]] uint8_t __pad0384[0x4]; // 0x384
public:
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Modifier Values"
	CUtlVector< ModifierScriptValue_t > m_vecScriptValues; // 0x388	
	// MPropertyGroupName "Scripted Settings"
	// MPropertyDescription "Scripted Event Handlers"
	CUtlVector< ModifierScriptedEventHandler_t > m_vecScriptEventHandlers; // 0x3a0	
	ModifierDisableGroup_t m_nDisableGroupsMask; // 0x3b8	
	// MPropertyDescription "When set, the modifier only provides data to requests made directly to the attached entity and not to other modifier properties that the owner provides to."
	bool m_bPrivateAccess; // 0x3bc	
	// MPropertyGroupName "UI"
	// MPropertyDescription "When set, the modifier will not be visible to UI or visible modifier list."
	bool m_bIsHidden; // 0x3bd	
private:
	[[maybe_unused]] uint8_t __pad03be[0x2]; // 0x3be
public:
	// MPropertyGroupName "UI"
	// MPropertySuppressExpr "m_bIsHidden != true"
	ModifierHiddenType_t m_eHiddenType; // 0x3c0	
private:
	[[maybe_unused]] uint8_t __pad03c4[0x4]; // 0x3c4
public:
	// MPropertyGroupName "UI"
	// MPropertyDescription "When set, use the value as localization key."
	CUtlString m_sLocalizationName; // 0x3c8	
	// MPropertyDescription "When to consider the modifier a debuff."
	ModifierDebuffType_t m_eDebuffType; // 0x3d0	
	// MPropertyDescription "When set, stacks will automatically be decayed after a duration's worth of time has passed.  Only makes sense if adding a stack refreshed the modifier."
	bool m_bAutomaticallyDecayStacks; // 0x3d4	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ApplyDebuff_ProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	bool m_bUseNonEmbedded; // 0x688	
private:
	[[maybe_unused]] uint8_t __pad0689[0x7]; // 0x689
public:
	// MPropertyGroupName "Time"
	// MPropertyDescription "If this is set, the modifier will use the value from this AbilityProperty as the duration, instead of AbilityDuration."
	CUtlString m_DurationAbilityPropOverride; // 0x690	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x698	
	CSubclassName< 2 > m_NonEmbeddedModifier; // 0x6a8	
};


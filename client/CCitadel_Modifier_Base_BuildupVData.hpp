#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0x3]; // 0x5e1
public:
	float m_flCycleTimeDelayAdd; // 0x5e4	
	float m_flBuildUpDecayDelay; // 0x5e8	
	BuildupMode_t m_eBuildupMode; // 0x5ec	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x5f0	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x5f1	
};


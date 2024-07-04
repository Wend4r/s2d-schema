#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x5f0	
private:
	[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
public:
	float m_flCycleTimeDelayAdd; // 0x5f4	
	float m_flBuildUpDecayDelay; // 0x5f8	
	BuildupMode_t m_eBuildupMode; // 0x5fc	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x600	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x601	
};


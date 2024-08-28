#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05f9[0x3]; // 0x5f9
public:
	float m_flCycleTimeDelayAdd; // 0x5fc	
	float m_flBuildUpDecayDelay; // 0x600	
	BuildupMode_t m_eBuildupMode; // 0x604	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x608	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x609	
};


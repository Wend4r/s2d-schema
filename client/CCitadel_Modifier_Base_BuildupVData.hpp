#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData
{
public:
	bool m_bUseBaseWeaponCycleTimeForDelay; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0659[0x3]; // 0x659
public:
	float m_flCycleTimeDelayAdd; // 0x65c	
	float m_flBuildUpDecayDelay; // 0x660	
	BuildupMode_t m_eBuildupMode; // 0x664	
	// MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
	bool m_bBuildupAffectedByEffectiveness; // 0x668	
	// MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
	bool m_bPassBuildupEffectivenessToFillModifier; // 0x669	
};


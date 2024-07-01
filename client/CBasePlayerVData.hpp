#pragma once

#include <cstdint>

struct CSkillFloat;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
class CBasePlayerVData : public CEntitySubclassVDataBase
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x108	
	CSkillFloat m_flHeadDamageMultiplier; // 0x120	
	CSkillFloat m_flChestDamageMultiplier; // 0x130	
	CSkillFloat m_flStomachDamageMultiplier; // 0x140	
	CSkillFloat m_flArmDamageMultiplier; // 0x150	
	CSkillFloat m_flLegDamageMultiplier; // 0x160	
	// MPropertyGroupName "Water"
	float m_flHoldBreathTime; // 0x170	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Seconds between drowning ticks"
	float m_flDrowningDamageInterval; // 0x174	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
	int32_t m_nDrowningDamageInitial; // 0x178	
	// MPropertyGroupName "Water"
	// MPropertyDescription "Max damage done by a drowning tick"
	int32_t m_nDrowningDamageMax; // 0x17c	
	// MPropertyGroupName "Water"
	int32_t m_nWaterSpeed; // 0x180	
	// MPropertyGroupName "Use"
	float m_flUseRange; // 0x184	
	// MPropertyGroupName "Use"
	float m_flUseAngleTolerance; // 0x188	
	// MPropertyGroupName "Crouch"
	// MPropertyDescription "Time to move between crouch and stand"
	float m_flCrouchTime; // 0x18c	
};


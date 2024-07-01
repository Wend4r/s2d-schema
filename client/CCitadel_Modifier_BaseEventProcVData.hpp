#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x5e0	
	bool m_bShouldApplyAbilityCooldown; // 0x5e1	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x5e2	
	bool m_bCanProcByOtherObjects; // 0x5e3	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x5e4	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x5f0	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x608	
};


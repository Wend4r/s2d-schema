#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x5f0	
	bool m_bShouldApplyAbilityCooldown; // 0x5f1	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x5f2	
	bool m_bCanProcByOtherObjects; // 0x5f3	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x5f4	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x600	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x618	
};


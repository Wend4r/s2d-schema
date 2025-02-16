#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x638	
	bool m_bShouldApplyAbilityCooldown; // 0x639	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x63a	
	bool m_bCanProcByOtherObjects; // 0x63b	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x63c	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x640	
private:
	[[maybe_unused]] uint8_t __pad0644[0x4]; // 0x644
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x648	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x660	
};


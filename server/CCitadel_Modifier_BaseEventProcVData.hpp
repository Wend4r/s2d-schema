#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x658	
	bool m_bShouldApplyAbilityCooldown; // 0x659	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x65a	
	bool m_bCanProcByOtherObjects; // 0x65b	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x65c	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0664[0x4]; // 0x664
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x668	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x680	
};


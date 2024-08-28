#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData
{
public:
	bool m_bProcChanceAffectedByEffectiveness; // 0x5f8	
	bool m_bShouldApplyAbilityCooldown; // 0x5f9	
	// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
	bool m_bCanProcMultipleTimesOnOneTarget; // 0x5fa	
	bool m_bCanProcByOtherObjects; // 0x5fb	
	CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x5fc	
	CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
public:
	CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // 0x608	
	TakeDamageFlags_t m_nRequiredDamageFlags; // 0x620	
};


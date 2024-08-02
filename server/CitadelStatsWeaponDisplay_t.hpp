#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct CitadelStatsWeaponDisplay_t
{
public:
	// MPropertyDescription "The loc string of the heroes weapon name"
	CUtlString m_strWeaponNameLocString; // 0x0	
	// MPropertyDescription "The loc string of the heroes weapon description"
	CUtlString m_strWeaponDescLocString; // 0x8	
	// MPropertyDescription "The location of the weapon image"
	CUtlString m_strWeaponImage; // 0x10	
	// MPropertyDescription "The type of attributes does this weapon have?"
	ECitadelWeaponAttributes m_eWeaponAttributes; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001a[0x6]; // 0x1a
public:
	// MPropertyDescription "What stats do we want to show in the top section?"
	CUtlVector< EStatsType > m_vecDisplayStats; // 0x20	
	// MPropertyDescription "What stats do we want to show in the other stats section?"
	CUtlVector< EStatsType > m_vecOtherDisplayStats; // 0x38	
};


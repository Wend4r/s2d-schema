#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct HeroLevel_t
{
public:
	uint32_t m_unRequiredGold; // 0x0	
	CUtlOrderedMap< ECurrencyType, int32 > m_mapBonusCurrencies; // 0x8	
	bool m_bUseStandardUpgrade; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0031[0x7]; // 0x31
public:
	CUtlVector< BonusUpgrade_t > m_vecBonusUpgrades; // 0x38	
};


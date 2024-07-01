#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1528
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad14e0[0x4]; // 0x14e0
public:
	EModTier_t m_iItemTier; // 0x14e4	
	int8_t m_nUpgradeSlotCost; // 0x14e5	
	bool m_bWarnIfNoAffectedAbilities; // 0x14e6	
	bool m_bRequiresChargedAbility; // 0x14e7	
	bool m_bRequiresChanelledAbility; // 0x14e8	
private:
	[[maybe_unused]] uint8_t __pad14e9[0x7]; // 0x14e9
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x14f0	
	bool m_bShowTextDescription; // 0x1508	
	bool m_bIsDefensiveItem; // 0x1509	
	EShopFilters_t m_eShopFilters; // 0x150a	
private:
	[[maybe_unused]] uint8_t __pad150c[0x4]; // 0x150c
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x1510	
};


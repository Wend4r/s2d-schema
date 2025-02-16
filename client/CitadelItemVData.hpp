#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad1590[0x4]; // 0x1590
public:
	EModTier_t m_iItemTier; // 0x1594	
	int8_t m_nUpgradeSlotCost; // 0x1595	
	bool m_bWarnIfNoAffectedAbilities; // 0x1596	
	bool m_bRequiresChargedAbility; // 0x1597	
	bool m_bRequiresChanelledAbility; // 0x1598	
private:
	[[maybe_unused]] uint8_t __pad1599[0x7]; // 0x1599
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x15a0	
	bool m_bShowTextDescription; // 0x15b8	
	bool m_bIsDefensiveItem; // 0x15b9	
	EShopFilters_t m_eShopFilters; // 0x15ba	
private:
	[[maybe_unused]] uint8_t __pad15bc[0x4]; // 0x15bc
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x15c0	
};


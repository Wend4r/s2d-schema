#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad15c8[0x4]; // 0x15c8
public:
	EModTier_t m_iItemTier; // 0x15cc	
	int8_t m_nUpgradeSlotCost; // 0x15cd	
	bool m_bWarnIfNoAffectedAbilities; // 0x15ce	
	bool m_bRequiresChargedAbility; // 0x15cf	
	bool m_bRequiresChanelledAbility; // 0x15d0	
private:
	[[maybe_unused]] uint8_t __pad15d1[0x7]; // 0x15d1
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x15d8	
	bool m_bShowTextDescription; // 0x15f0	
	bool m_bIsDefensiveItem; // 0x15f1	
	EShopFilters_t m_eShopFilters; // 0x15f2	
private:
	[[maybe_unused]] uint8_t __pad15f4[0x4]; // 0x15f4
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x15f8	
};


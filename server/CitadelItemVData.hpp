#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad14e8[0x4]; // 0x14e8
public:
	EModTier_t m_iItemTier; // 0x14ec	
	int8_t m_nUpgradeSlotCost; // 0x14ed	
	bool m_bWarnIfNoAffectedAbilities; // 0x14ee	
	bool m_bRequiresChargedAbility; // 0x14ef	
	bool m_bRequiresChanelledAbility; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f1[0x7]; // 0x14f1
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x14f8	
	bool m_bShowTextDescription; // 0x1510	
	bool m_bIsDefensiveItem; // 0x1511	
	EShopFilters_t m_eShopFilters; // 0x1512	
private:
	[[maybe_unused]] uint8_t __pad1514[0x4]; // 0x1514
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x1518	
};


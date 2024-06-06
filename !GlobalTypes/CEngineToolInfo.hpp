#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CEngineToolInfo : public CBaseToolInfo
{
public:
	CUtlString m_Library; // 0x20	
	CUtlString m_InterfaceName; // 0x28	
	bool m_bShowInRevisionSubMenu; // 0x30	
	bool m_bIsSecondaryTool; // 0x31	
	bool m_bDoNotWarnAboutLargeAssetBatches; // 0x32	
	bool m_bIsWorkshopManagerTool; // 0x33	
	bool m_bIsWorkshopItemTool; // 0x34	
	bool m_bCanHighlightSubassets; // 0x35	
private:
	[[maybe_unused]] uint8_t __pad0036[0x2]; // 0x36
public:
	CUtlVector< CUtlString > m_AssetTypes; // 0x38	
	CUtlVector< CUtlString > m_LimitToMods; // 0x50	
	CUtlVector< CUtlString > m_ExcludeFromMods; // 0x68	
};


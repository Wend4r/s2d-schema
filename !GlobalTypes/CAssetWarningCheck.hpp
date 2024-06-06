#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CAssetWarningCheck
{
public:
	CUtlString m_AssetType; // 0x0	
	CBufferString m_RequireSearchableIntKey; // 0x8	
	int32_t m_RequireSearchableIntValue; // 0x18	
	bool m_bOnlyWarnIfGameFilePresent; // 0x1c	
	bool m_bOnlyWarnIfContentFilePresent; // 0x1d	
	bool m_bOnlyWarnAddons; // 0x1e	
private:
	[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
public:
	CUtlVector< CUtlString > m_ExcludeAddonNames; // 0x20	
	CUtlString m_FixDescription; // 0x38	
	AssetWarningFixType_t m_FixType; // 0x40	
};


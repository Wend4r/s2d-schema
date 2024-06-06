#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CResourceAssetTypeInfo : public CSimpleAssetTypeInfo
{
public:
	CUtlString m_CompilerIdentifier; // 0xd0	
	CUtlVector< CUtlString > m_CompileDependsOnResourceTypes; // 0xd8	
	CUtlVector< ResourceBlockTypeInfo_t > m_Blocks; // 0xf0	
	bool m_bPreventDirectCompile; // 0x108	
	bool m_bCannotBeAMultiParentChildCompile; // 0x109	
	bool m_bPrefersIconForThumbnail; // 0x10a	
};


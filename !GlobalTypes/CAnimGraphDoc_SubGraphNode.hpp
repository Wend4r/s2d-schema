#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "SubGraph"
// MPropertyExtendedEditor
class CAnimGraphDoc_SubGraphNode : public CAnimGraphDoc_ContainerNodeBase
{
public:
	// MPropertyFriendlyName "SubGraph File"
	// MPropertyAttributeEditor "AssetBrowse( vsubgrph, *requiredoubleclick  )"
	// MPropertyAttrChangeCallback
	CUtlString m_subGraphFilename; // 0x70	
	// MPropertyHideField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap; // 0x78	
};


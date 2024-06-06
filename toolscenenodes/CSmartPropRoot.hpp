#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xb0
// 
// MGetKV3ClassDefaults
// MSmartPropClassVersion
// MVDataRoot
// MVDataSingleton
// MVDataFileExtension
// MVDataPreviewWidget
// MVDataGroupNodeClass
// MVDataUsesComponentEditor
// MPropertyFriendlyName "Smart Prop"
// MPropertyDescription "Root of a smart prop, contains a list of elements to evaluate."
class CSmartPropRoot
{
public:
	// MPropertyDescription "Specifies the current version of this smart prop. Any existing references to this smart prop with an older version number will not automatically update."
	int32_t m_nContentVersion; // 0x0	
	// MPropertyDescription "Maximum depth of smart prop evaluation stack during evaluation."
	CSmartPropAttributeInt m_nMaxDepth; // 0x8	
	// MPropertyFriendlyName "Variables"
	// MVDataPromoteField
	CUtlVector< CSmartPropVariable* > m_Variables; // 0x48	
	// MPropertyFriendlyName "Choices"
	// MVDataPromoteField
	CUtlVector< CSmartPropChoice* > m_Choices; // 0x60	
	// MPropertyDescription "List of the root level elements making up the smart prop definition, each element may be an entire tree."
	// MVDataPromoteField
	CUtlVector< CSmartPropElement* > m_Children; // 0x78	
};


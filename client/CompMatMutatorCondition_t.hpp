#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
struct CompMatMutatorCondition_t
{
public:
	// MPropertyAutoRebuildOnChange
	// MPropertyFriendlyName "Condition"
	CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // 0x0	
	// MPropertyFriendlyName "Container Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerName; // 0x8	
	// MPropertyFriendlyName "Variable Name"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarName; // 0x10	
	// MPropertyFriendlyName "Variable Value"
	// MPropertyAttrStateCallback
	CUtlString m_strMutatorConditionContainerVarValue; // 0x18	
	// MPropertyFriendlyName "Pass when True"
	bool m_bPassWhenTrue; // 0x20	
};


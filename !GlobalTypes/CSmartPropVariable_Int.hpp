#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Integer"
class CSmartPropVariable_Int : public CSmartPropVariable
{
public:
	int32_t m_DefaultValue; // 0x28	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	int32_t m_nParamaterMinValue; // 0x2c	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	int32_t m_nParamaterMaxValue; // 0x30	
};


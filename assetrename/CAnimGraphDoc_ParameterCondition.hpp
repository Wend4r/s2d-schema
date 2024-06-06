#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Parameter Condition"
class CAnimGraphDoc_ParameterCondition : public CAnimGraphDoc_Condition
{
public:
	CUtlString m_paramName; // 0x28	
	AnimParamID m_paramID; // 0x30	
	Comparison_t m_comparisonOp; // 0x34	
	CAnimVariant m_comparisonValue; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad0049[0x7]; // 0x49
public:
	CUtlString m_comparisonString; // 0x50	
};


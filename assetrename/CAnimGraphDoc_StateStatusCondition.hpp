#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "State Status Condition"
class CAnimGraphDoc_StateStatusCondition : public CAnimGraphDoc_Condition
{
public:
	StateValue m_sourceValue; // 0x28	
	StateComparisonValueType m_comparisonValueType; // 0x2c	
	float m_comparisonFixedValue; // 0x30	
	StateValue m_comparisonStateValue; // 0x34	
	CUtlString m_comparisonParamName; // 0x38	
	AnimParamID m_comparisonParamID; // 0x40	
	Comparison_t m_comparisonOp; // 0x44	
};


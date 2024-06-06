#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cycle Condition"
class CAnimGraphDoc_CycleCondition : public CAnimGraphDoc_Condition
{
public:
	Comparison_t m_comparisonOp; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlString m_comparisonString; // 0x30	
	float m_comparisonValue; // 0x38	
	ComparisonValueType m_comparisonValueType; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	CUtlString m_comparisonParamName; // 0x40	
	AnimParamID m_comparisonParamID; // 0x48	
};


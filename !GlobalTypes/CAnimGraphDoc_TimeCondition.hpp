#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Time Condition"
class CAnimGraphDoc_TimeCondition : public CAnimGraphDoc_Condition
{
public:
	Comparison_t m_comparisonOp; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
public:
	CUtlString m_comparisonString; // 0x30	
};


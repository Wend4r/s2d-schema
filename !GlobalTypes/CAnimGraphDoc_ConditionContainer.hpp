#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ConditionContainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Condition > > m_conditions; // 0x8	
};


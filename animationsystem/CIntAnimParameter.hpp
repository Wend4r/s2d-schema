#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Int Parameter"
class CIntAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	int32_t m_defaultValue; // 0x80	
	// MPropertyFriendlyName "Min Value"
	int32_t m_minValue; // 0x84	
	// MPropertyFriendlyName "Max Value"
	int32_t m_maxValue; // 0x88	
};


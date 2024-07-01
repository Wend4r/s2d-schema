#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Vector Parameter"
class CVectorAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	Vector m_defaultValue; // 0x80	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x8c	
};


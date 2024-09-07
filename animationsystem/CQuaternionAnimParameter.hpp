#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Quaternion Parameter"
class CQuaternionAnimParameter : public CConcreteAnimParameter
{
public:
	// MPropertyFriendlyName "Default Value"
	Quaternion m_defaultValue; // 0x80	
	// MPropertyFriendlyName "Interpolate"
	bool m_bInterpolate; // 0x90	
};


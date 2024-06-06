#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Direction Vector"
// MPropertyDescription "Specifies a basis direction vector ( Forward, Left, or UP)."
// MVDataClassGroup
class CSmartPropVariable_DirectionVector : public CSmartPropVariable
{
public:
	SmartPropDirection_t m_DefaultValue; // 0x28	
};


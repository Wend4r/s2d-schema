#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Grid Origin"
// MPropertyDescription "Specifies where the origin of a child element is placed realative to each grid cell."
// MVDataClassGroup
class CSmartPropVariable_GridOriginMode : public CSmartPropVariable
{
public:
	SmartPropGridOriginBasis_t m_DefaultValue; // 0x28	
};


#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Material"
// MPropertyDescription "Material Asset Variable"
class CSmartPropVariable_Material : public CSmartPropVariable
{
public:
	// MPropertyFriendlyName "Default Material"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_DefaultValue; // 0x28	
};


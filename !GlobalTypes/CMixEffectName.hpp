#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Effect Name Node"
// MPropertyDescription "Define an effect name variable that can be controlled by code/operator stack and used to drive processor/effectchain/subgraphswitch nodes."
class CMixEffectName : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Default Value"
	// MPropertyAttributeChoiceName "dsp_preset"
	CUtlString m_defaultValue; // 0x20	
};


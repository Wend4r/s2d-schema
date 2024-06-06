#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Control Array Input Node"
// MPropertyDescription "Define a control array variable that can be set by code or an operator stack.  This can be used to control steamaudio pathing or steamaudio reverb for example."
class CMixControlInputArray : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Input Data"
	// MPropertyAttributeRange "-1 1"
	CUtlVector< float32 > m_vflData; // 0x20	
};


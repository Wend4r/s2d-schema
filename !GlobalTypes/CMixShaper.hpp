#pragma once

#include <cstdint>

struct VMixShaperDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Shaper Audio Node"
// MPropertyDescription "Apply waveshaping distortion to an audio track."
class CMixShaper : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixShaperDesc_t m_desc; // 0x20	
};


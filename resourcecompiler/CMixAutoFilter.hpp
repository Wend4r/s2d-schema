#pragma once

#include <cstdint>

struct VMixAutoFilterDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Auto Filter Node"
// MPropertyDescription "A continuously variable filter that can be driven by a built-in envelope follower and/or LFO.  Stereo channels can be processed differently by adjusting the phase parameter."
class CMixAutoFilter : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixAutoFilterDesc_t m_desc; // 0x20	
};


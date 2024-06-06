#pragma once

#include <cstdint>

struct VMixUtilityDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Utility Audio Node"
// MPropertyDescription "Adjust the stereo spread/pan/balance of a signal or convert it to mono or mid/side."
class CMixUtility : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixUtilityDesc_t m_desc; // 0x20	
};


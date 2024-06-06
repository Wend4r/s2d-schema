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
	// -> m_nOp - 0x20
	// -> m_flInputPan - 0x24
	// -> m_flOutputBalance - 0x28
	// -> m_fldbOutputGain - 0x2c
	// -> m_bBassMono - 0x30
	// -> m_flBassFreq - 0x34
	VMixUtilityDesc_t m_desc; // 0x20	
};


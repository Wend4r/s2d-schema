#pragma once

#include <cstdint>

struct VMixConvolutionDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Audio Convolution Node"
// MPropertyDescription "Apply a vsnd as an impulse response (IR) to an audio signal via convolution."
class CMixConvolution : public CMixPropertyBase
{
public:
	// MPropertyAutoExpandSelf
	VMixConvolutionDesc_t m_desc; // 0x20	
};


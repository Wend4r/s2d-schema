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
	// -> m_flEnvelopeAmount - 0x20
	// -> m_flAttackTimeMS - 0x24
	// -> m_flReleaseTimeMS - 0x28
	// -> m_filter - 0x2c
	// -> m_flLFOAmount - 0x3c
	// -> m_flLFORate - 0x40
	// -> m_flPhase - 0x44
	// -> m_nLFOShape - 0x48
	VMixAutoFilterDesc_t m_desc; // 0x20	
};


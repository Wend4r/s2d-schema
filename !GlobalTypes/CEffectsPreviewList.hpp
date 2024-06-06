#pragma once

#include <cstdint>

struct CPreviewList;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CEffectsPreviewList
{
public:
	CUtlString m_previewGraphInput; // 0x0	
	float m_flMix; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// -> m_sounds - 0x10
	// -> m_bPreviewInGame - 0x28
	CPreviewList m_previewList; // 0x10	
};


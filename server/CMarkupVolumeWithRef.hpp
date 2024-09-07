#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x7a8	
private:
	[[maybe_unused]] uint8_t __pad07a9[0x3]; // 0x7a9
public:
	Vector m_vRefPos; // 0x7ac	
	float m_flRefDot; // 0x7b8	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	Vector m_vRefPos; // 0x7d4	
	float m_flRefDot; // 0x7e0	
};


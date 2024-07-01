#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
public:
	Vector m_vRefPos; // 0x78c	
	float m_flRefDot; // 0x798	
};


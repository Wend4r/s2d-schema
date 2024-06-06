#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
class CMarkupVolumeWithRef : public CMarkupVolumeTagged
{
public:
	bool m_bUseRef; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x3]; // 0x751
public:
	Vector m_vRefPos; // 0x754	
	float m_flRefDot; // 0x760	
};


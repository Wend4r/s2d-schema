#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xaf0
// Has VTable
class CUnitStatusOverlayNew : public CUnitStatusOverlay
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x50]; // 0xa70
public:
	float m_flUIScale; // 0xac0	
};


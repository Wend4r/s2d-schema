#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xad0
// Has VTable
class CUnitStatusOverlay : public C_PointClientUIWorldPanel
{
private:
	[[maybe_unused]] uint8_t __pad0a70[0x40]; // 0xa70
public:
	float m_flUIScale; // 0xab0	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xaf0
// Has VTable
class CUnitStatusOverlay : public C_PointClientUIWorldPanel
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x40]; // 0xa90
public:
	float m_flUIScale; // 0xad0	
};


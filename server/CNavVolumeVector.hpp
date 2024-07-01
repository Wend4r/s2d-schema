#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'navlib')
// Alignment: 8
// Size: 0x98
// Has VTable
class CNavVolumeVector : public CNavVolume
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	bool m_bHasBeenPreFiltered; // 0x78	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
class CCitadel_Item_ZiplineMastery : public CCitadel_Item
{
public:
	bool m_bWasZiplining; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x3]; // 0xac9
public:
	GameTime_t m_flZipStartTime; // 0xacc	
};


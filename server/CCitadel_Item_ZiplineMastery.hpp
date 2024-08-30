#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
class CCitadel_Item_ZiplineMastery : public CCitadel_Item
{
public:
	bool m_bWasZiplining; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	GameTime_t m_flZipStartTime; // 0xafc	
};


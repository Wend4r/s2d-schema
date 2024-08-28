#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb80
// Has VTable
class CCitadel_Item_ZiplineMastery : public CCitadel_Item
{
public:
	bool m_bWasZiplining; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad1[0x3]; // 0xad1
public:
	GameTime_t m_flZipStartTime; // 0xad4	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x150
// Has VTable
class CModifier_Mirage_Tornado_Lift : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	Vector m_vecFloatDest; // 0x138	
	Vector m_vecStartingPos; // 0x144	
};


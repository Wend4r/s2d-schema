#pragma once

#include <cstdint>

struct C_FireSmoke;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CFireOverlay : public CGlowOverlay
{
public:
	C_FireSmoke* m_pOwner; // 0xd0	
	Vector m_vBaseColors[4]; // 0xd8	
	float m_flScale; // 0x108	
	int32_t m_nGUID; // 0x10c	
};


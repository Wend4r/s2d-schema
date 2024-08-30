#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x978
// Has VTable
class CCitadelBoomerangProjectile : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0820[0x150]; // 0x820
public:
	bool m_bReturning; // 0x970	
};


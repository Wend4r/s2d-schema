#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
class CCitadel_Projectile_WreckingBall : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0800[0x10]; // 0x800
public:
	bool m_bBroken; // 0x810	
};


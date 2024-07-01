#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x848
// Has VTable
class CCitadel_Projectile_WreckingBall : public CCitadelProjectile
{
private:
	[[maybe_unused]] uint8_t __pad07f8[0x10]; // 0x7f8
public:
	bool m_bBroken; // 0x808	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x178
// Has VTable
class CCitadel_Modifier_LightningBall : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0x170	
};


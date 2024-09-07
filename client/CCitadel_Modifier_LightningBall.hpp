#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_LightningBall : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	CHandle< C_BaseEntity > m_hProjectile; // 0x168	
};


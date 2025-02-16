#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x260
// Has VTable
class CCitadel_Modifier_IceBeam_Stacking_Slow : public CCitadel_Modifier_Base_Buildup
{
private:
	[[maybe_unused]] uint8_t __pad00d0[0x188]; // 0xd0
public:
	float m_flCurrBuildup; // 0x258	
};


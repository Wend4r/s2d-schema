#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
class CCitadel_Modifier_DPSTracker : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x18]; // 0xc0
public:
	float m_flInterval; // 0xd8	
	float m_flProgress; // 0xdc	
	float m_flDistToTarget; // 0xe0	
};


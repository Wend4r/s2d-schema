#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
public:
	float m_flMinSlowAmount; // 0x170	
	float m_flMoveSpeedPenaltyPerStack; // 0x174	
	float m_flSlowDuration; // 0x178	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2b0
// Has VTable
class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned
{
public:
	Vector m_vCrashDir; // 0xd0	
	Vector m_vLiftTarget; // 0xdc	
	GameTime_t m_flStartTime; // 0xe8	
	bool m_bCrashingDown; // 0xec	
};


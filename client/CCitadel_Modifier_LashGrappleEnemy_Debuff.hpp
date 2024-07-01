#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2a8
// Has VTable
class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned
{
public:
	Vector m_vCrashDir; // 0xc8	
	Vector m_vLiftTarget; // 0xd4	
	GameTime_t m_flStartTime; // 0xe0	
	bool m_bCrashingDown; // 0xe4	
};


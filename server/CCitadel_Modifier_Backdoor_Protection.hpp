#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier
{
public:
	int32_t m_MaxHealth; // 0xc8	
	GameTime_t m_flLastAttackedTime; // 0xcc	
	ParticleIndex_t m_nActiveShieldEffect; // 0xd0	
};


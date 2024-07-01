#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x238
// Has VTable
class CCitadel_Modifier_SleepBomb : public CCitadelModifier
{
public:
	float m_flGoalHeight; // 0xc8	
	float m_flFallRate; // 0xcc	
	ParticleIndex_t m_nBombEffect; // 0xd0	
	CHandle< CBaseEntity > m_eIgnoreTarget; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d8[0x150]; // 0xd8
public:
	Vector m_vecOrigin; // 0x228	
};


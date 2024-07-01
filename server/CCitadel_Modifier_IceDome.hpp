#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x290
// Has VTable
class CCitadel_Modifier_IceDome : public CCitadelModifier
{
public:
	CHandle< CCitadel_Ice_Dome_Blocker > m_hBlocker; // 0xc8	
	CHandle< CPointModifierThinker > m_hFriendlyAura; // 0xcc	
	CHandle< CPointModifierThinker > m_hEnemyAura; // 0xd0	
	ParticleIndex_t m_nParticleIndex; // 0xd4	
	GameTime_t m_flStartTime; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00dc[0xe4]; // 0xdc
public:
	Vector m_vOrigin; // 0x1c0	
};


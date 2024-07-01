#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_IceDome : public CCitadelModifier
{
public:
	CHandle< C_Citadel_Ice_Dome_Blocker > m_hBlocker; // 0xc0	
	CHandle< CPointModifierThinker > m_hFriendlyAura; // 0xc4	
	CHandle< CPointModifierThinker > m_hEnemyAura; // 0xc8	
	ParticleIndex_t m_nParticleIndex; // 0xcc	
	GameTime_t m_flStartTime; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0xe4]; // 0xd4
public:
	Vector m_vOrigin; // 0x1b8	
};


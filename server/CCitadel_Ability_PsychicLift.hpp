#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
class CCitadel_Ability_PsychicLift : public CCitadelBaseAbility
{
public:
	int32_t m_nChainsOnHitRemaining; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // 0xb08	
};


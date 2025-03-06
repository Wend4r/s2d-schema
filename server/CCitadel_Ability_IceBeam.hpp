#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityBeam_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1208
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c4]; // 0xb00
public:
	GameTime_t m_flNextDamageTick; // 0xcc4	
	// MNetworkEnable
	// -> m_nActivateTime - 0xcd0
	// -> m_angBeamAngles - 0xcd4
	// -> m_vBeamAimPos - 0xce0
	// -> m_hShooter - 0xcec
	// -> m_hPlayerShooter - 0xcf0
	// -> m_bEnforceLOSToShootPosition - 0x11b0
	CCitadelAbilityBeam_t m_beam; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad11b8[0x38]; // 0x11b8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x11f0	
};


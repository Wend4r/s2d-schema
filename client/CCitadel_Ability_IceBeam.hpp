#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAbilityBeam_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1378
// Has VTable
// 
// MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1c4]; // 0xc50
public:
	GameTime_t m_flNextDamageTick; // 0xe14	
	// MNetworkEnable
	// -> m_nActivateTime - 0xe20
	// -> m_angBeamAngles - 0xe28
	// -> m_vBeamAimPos - 0xe40
	// -> m_bNeedsBeamReset - 0xe58
	// -> m_hShooter - 0xe5c
	// -> m_hPlayerShooter - 0xe60
	// -> m_bEnforceLOSToShootPosition - 0x1320
	CCitadelAbilityBeam_t m_beam; // 0xe18	
private:
	[[maybe_unused]] uint8_t __pad1328[0x38]; // 0x1328
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x1360	
};


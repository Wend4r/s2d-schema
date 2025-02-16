#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1328
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x5e8]; // 0xca0
public:
	GameTime_t m_flNextDamageTick; // 0x1288	
	Vector m_vStart; // 0x128c	
	Vector m_vEnd; // 0x1298	
private:
	[[maybe_unused]] uint8_t __pad12a4[0x3c]; // 0x12a4
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x12e0	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x12f8	
private:
	[[maybe_unused]] uint8_t __pad1304[0x4]; // 0x1304
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x1308	
private:
	[[maybe_unused]] uint8_t __pad1314[0xc]; // 0x1314
public:
	bool m_bNeedsBeamReset; // 0x1320	
};


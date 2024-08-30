#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1308
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x618]; // 0xc50
public:
	GameTime_t m_flNextDamageTick; // 0x1268	
	Vector m_vStart; // 0x126c	
	Vector m_vEnd; // 0x1278	
private:
	[[maybe_unused]] uint8_t __pad1284[0x3c]; // 0x1284
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x12c0	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x12d8	
private:
	[[maybe_unused]] uint8_t __pad12e4[0x4]; // 0x12e4
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x12e8	
private:
	[[maybe_unused]] uint8_t __pad12f4[0xc]; // 0x12f4
public:
	bool m_bNeedsBeamReset; // 0x1300	
};


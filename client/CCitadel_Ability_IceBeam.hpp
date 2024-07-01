#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12c0
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_IceBeam : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x618]; // 0xc28
public:
	GameTime_t m_flNextDamageTick; // 0x1240	
	Vector m_vStart; // 0x1244	
	Vector m_vEnd; // 0x1250	
private:
	[[maybe_unused]] uint8_t __pad125c[0x4]; // 0x125c
public:
	Vector m_vSplitStart; // 0x1260	
	Vector m_vSplitEnd; // 0x126c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0x1278	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1290	
private:
	[[maybe_unused]] uint8_t __pad129c[0x4]; // 0x129c
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x12a0	
private:
	[[maybe_unused]] uint8_t __pad12ac[0xc]; // 0x12ac
public:
	bool m_bNeedsBeamReset; // 0x12b8	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_nActivateTime"
// MNetworkVarNames "QAngle m_angBeamAngles"
// MNetworkVarNames "Vector m_vBeamAimPos"
struct CCitadelAbilityBeam_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_nActivateTime; // 0x8	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkPriority "32"
	Vector m_vBeamAimPos; // 0x18	
	CHandle< CBaseEntity > m_hShooter; // 0x24	
	CHandle< CCitadelPlayerPawn > m_hPlayerShooter; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x4bc]; // 0x2c
public:
	bool m_bEnforceLOSToShootPosition; // 0x4e8	
};


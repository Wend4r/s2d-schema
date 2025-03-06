#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_nActivateTime"
struct CCitadelAbilityBeam_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_nActivateTime; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	// MNetworkChangeCallback "OnBeamAimPosChanged"
	Vector m_vBeamAimPos; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0034[0xc]; // 0x34
public:
	bool m_bNeedsBeamReset; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0041[0x3]; // 0x41
public:
	CHandle< C_BaseEntity > m_hShooter; // 0x44	
	CHandle< C_CitadelPlayerPawn > m_hPlayerShooter; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4bc]; // 0x4c
public:
	bool m_bEnforceLOSToShootPosition; // 0x508	
};


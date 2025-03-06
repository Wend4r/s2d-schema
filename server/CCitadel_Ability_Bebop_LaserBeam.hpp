#pragma once

#include <cstdint>

struct CCitadelAbilityBeam_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1388
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
// MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x380]; // 0xb00
public:
	bool m_bZoomed; // 0xe80	
	// MNetworkEnable
	bool m_bAirCast; // 0xe81	
private:
	[[maybe_unused]] uint8_t __pad0e82[0x6]; // 0xe82
public:
	// MNetworkEnable
	CCitadelAbilityBeam_t m_beam; // 0xe88	
private:
	[[maybe_unused]] uint8_t __pad1378[0x4]; // 0x1378
public:
	float m_flAngleBetweenTrace; // 0x137c	
	int32_t m_nTotalDamage; // 0x1380	
	GameTime_t m_flNextDamageTime; // 0x1384	
};


#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFlyingAngles"
// MNetworkVarNames "GameTime_t m_flFlyingStartTime"
// MNetworkVarNames "GameTime_t m_flFlyingEndTime"
// MNetworkVarNames "float m_flDiveStart"
// MNetworkVarNames "float m_flFlyingSpeed"
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bDiving"
class CCitadel_Ability_Tengu_LightningCrash : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	QAngle m_angFlyingAngles; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0abc[0x270]; // 0xabc
public:
	// MNetworkEnable
	GameTime_t m_flFlyingStartTime; // 0xd2c	
	// MNetworkEnable
	GameTime_t m_flFlyingEndTime; // 0xd30	
	// MNetworkEnable
	float m_flDiveStart; // 0xd34	
	// MNetworkEnable
	float m_flFlyingSpeed; // 0xd38	
	// MNetworkEnable
	bool m_bFlying; // 0xd3c	
	// MNetworkEnable
	bool m_bDiving; // 0xd3d	
private:
	[[maybe_unused]] uint8_t __pad0d3e[0x2]; // 0xd3e
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xd40	
};


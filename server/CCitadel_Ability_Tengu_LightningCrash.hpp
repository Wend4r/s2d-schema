#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd40
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
	QAngle m_angFlyingAngles; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x270]; // 0xab4
public:
	// MNetworkEnable
	GameTime_t m_flFlyingStartTime; // 0xd24	
	// MNetworkEnable
	GameTime_t m_flFlyingEndTime; // 0xd28	
	// MNetworkEnable
	float m_flDiveStart; // 0xd2c	
	// MNetworkEnable
	float m_flFlyingSpeed; // 0xd30	
	// MNetworkEnable
	bool m_bFlying; // 0xd34	
	// MNetworkEnable
	bool m_bDiving; // 0xd35	
private:
	[[maybe_unused]] uint8_t __pad0d36[0x2]; // 0xd36
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xd38	
};


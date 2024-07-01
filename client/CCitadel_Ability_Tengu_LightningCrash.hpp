#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flFlyingStartTime"
// MNetworkVarNames "GameTime_t m_flFlyingEndTime"
// MNetworkVarNames "float m_flDiveStart"
// MNetworkVarNames "float m_flFlyingSpeed"
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bDiving"
class CCitadel_Ability_Tengu_LightningCrash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlyingAnglesChanged"
	QAngle m_angFlyingAngles; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x278]; // 0xc34
public:
	// MNetworkEnable
	GameTime_t m_flFlyingStartTime; // 0xeac	
	// MNetworkEnable
	GameTime_t m_flFlyingEndTime; // 0xeb0	
	// MNetworkEnable
	float m_flDiveStart; // 0xeb4	
	// MNetworkEnable
	float m_flFlyingSpeed; // 0xeb8	
	// MNetworkEnable
	bool m_bFlying; // 0xebc	
	// MNetworkEnable
	bool m_bDiving; // 0xebd	
private:
	[[maybe_unused]] uint8_t __pad0ebe[0x2]; // 0xebe
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xec0	
};


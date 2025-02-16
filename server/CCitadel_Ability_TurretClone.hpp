#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_pActiveTurret"
class CCitadel_Ability_TurretClone : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x118]; // 0xb00
public:
	bool m_bHasTurretReady; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c19[0x3]; // 0xc19
public:
	int32_t m_iCurrentSwapCount; // 0xc1c	
	GameTime_t m_flTurretExpireTime; // 0xc20	
private:
	[[maybe_unused]] uint8_t __pad0c24[0x4]; // 0xc24
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_pActiveTurret; // 0xc28	
	ParticleIndex_t m_nTurretFXIndex; // 0xc2c	
};


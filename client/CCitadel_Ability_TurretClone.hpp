#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf28
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_pActiveTurret"
class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x118]; // 0xca0
public:
	bool m_bHasTurretReady; // 0xdb8	
private:
	[[maybe_unused]] uint8_t __pad0db9[0x3]; // 0xdb9
public:
	int32_t m_iCurrentSwapCount; // 0xdbc	
	GameTime_t m_flTurretExpireTime; // 0xdc0	
private:
	[[maybe_unused]] uint8_t __pad0dc4[0x4]; // 0xdc4
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_pActiveTurret; // 0xdc8	
	ParticleIndex_t m_nTurretFXIndex; // 0xdcc	
};


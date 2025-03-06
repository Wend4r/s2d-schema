#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_pActiveTurret"
class CCitadel_Ability_TurretClone : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x118]; // 0xc50
public:
	bool m_bHasTurretReady; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d69[0x3]; // 0xd69
public:
	int32_t m_iCurrentSwapCount; // 0xd6c	
	GameTime_t m_flTurretExpireTime; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d74[0x4]; // 0xd74
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_pActiveTurret; // 0xd78	
	ParticleIndex_t m_nTurretFXIndex; // 0xd7c	
};


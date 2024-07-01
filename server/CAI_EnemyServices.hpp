#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x68
// Has VTable
class CAI_EnemyServices : public CAI_Component
{
public:
	CHandle< CBaseEntity > m_hEnemy; // 0x40	
	CHandle< CBaseEntity > m_hLastEnemy; // 0x44	
	GameTime_t m_flTimeEnemyAcquired; // 0x48	
	bool m_bHasEnemyAcquired; // 0x4c	
private:
	[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
public:
	GameTime_t m_flTimeLastHadEnemy; // 0x50	
	bool m_bHasLastHadEnemy; // 0x54	
private:
	[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
public:
	int32_t m_nEnemiesSerialNumber; // 0x58	
	CHandle< CBaseEntity > m_hEnemyOccluder; // 0x5c	
	
	// Datamap fields:
	// void m_pEnemies; // 0x60
};


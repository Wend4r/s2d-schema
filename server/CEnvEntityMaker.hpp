#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4e0	
	Vector m_vecEntityMaxs; // 0x4ec	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4f8	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4fc	
	Vector m_vecBlockerOrigin; // 0x500	
	QAngle m_angPostSpawnDirection; // 0x50c	
	float m_flPostSpawnDirectionVariance; // 0x518	
	float m_flPostSpawnSpeed; // 0x51c	
	bool m_bPostSpawnUseAngles; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x7]; // 0x521
public:
	CUtlSymbolLarge m_iszTemplate; // 0x528	
	CEntityIOOutput m_pOutputOnSpawned; // 0x530	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x558	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};


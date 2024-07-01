#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4b8	
	Vector m_vecEntityMaxs; // 0x4c4	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4d0	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4d4	
	Vector m_vecBlockerOrigin; // 0x4d8	
	QAngle m_angPostSpawnDirection; // 0x4e4	
	float m_flPostSpawnDirectionVariance; // 0x4f0	
	float m_flPostSpawnSpeed; // 0x4f4	
	bool m_bPostSpawnUseAngles; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04f9[0x7]; // 0x4f9
public:
	CUtlSymbolLarge m_iszTemplate; // 0x500	
	CEntityIOOutput m_pOutputOnSpawned; // 0x508	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x530	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CEnvEntityMaker : public CPointEntity
{
public:
	Vector m_vecEntityMins; // 0x4c0	
	Vector m_vecEntityMaxs; // 0x4cc	
	CHandle< CBaseEntity > m_hCurrentInstance; // 0x4d8	
	CHandle< CBaseEntity > m_hCurrentBlocker; // 0x4dc	
	Vector m_vecBlockerOrigin; // 0x4e0	
	QAngle m_angPostSpawnDirection; // 0x4ec	
	float m_flPostSpawnDirectionVariance; // 0x4f8	
	float m_flPostSpawnSpeed; // 0x4fc	
	bool m_bPostSpawnUseAngles; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0501[0x7]; // 0x501
public:
	CUtlSymbolLarge m_iszTemplate; // 0x508	
	CEntityIOOutput m_pOutputOnSpawned; // 0x510	
	CEntityIOOutput m_pOutputOnFailedSpawn; // 0x538	
	
	// Datamap fields:
	// void InputForceSpawn; // 0x0
	// CUtlSymbolLarge InputForceSpawnAtEntityOrigin; // 0x0
	// void CEnvEntityMakerCheckSpawnThink; // 0x0
};


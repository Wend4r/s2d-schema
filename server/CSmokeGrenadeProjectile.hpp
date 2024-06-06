#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d70
// Has VTable
// 
// MNetworkVarNames "int m_nSmokeEffectTickBegin"
// MNetworkVarNames "bool m_bDidSmokeEffect"
// MNetworkVarNames "int m_nRandomSeed"
// MNetworkVarNames "Vector m_vSmokeColor"
// MNetworkVarNames "Vector m_vSmokeDetonationPos"
// MNetworkVarNames "CUtlVector<uint8> m_VoxelFrameData"
class CSmokeGrenadeProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x18]; // 0xa90
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0xaa8	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0xaac	
private:
	[[maybe_unused]] uint8_t __pad0aad[0x3]; // 0xaad
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0xab0	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0xab4	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	// MNetworkEnable
	CUtlVector< uint8 > m_VoxelFrameData; // 0xad0	
	GameTime_t m_flLastBounce; // 0xae8	
	GameTime_t m_fllastSimulationTime; // 0xaec	
	
	// Datamap fields:
	// void CSmokeGrenadeProjectileThink_Detonate; // 0x0
	// void CSmokeGrenadeProjectileThink_Update; // 0x0
	// void CSmokeGrenadeProjectileThink_Remove; // 0x0
	// void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
	// void InitializeSpawnFromWorld; // 0x0
};


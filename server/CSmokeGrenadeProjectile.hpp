#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2e38
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
	[[maybe_unused]] uint8_t __pad0b50[0x18]; // 0xb50
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0xb68	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0xb6c	
private:
	[[maybe_unused]] uint8_t __pad0b6d[0x3]; // 0xb6d
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0xb70	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0xb74	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0xb80	
private:
	[[maybe_unused]] uint8_t __pad0b8c[0x4]; // 0xb8c
public:
	// MNetworkEnable
	CUtlVector< uint8 > m_VoxelFrameData; // 0xb90	
	GameTime_t m_flLastBounce; // 0xba8	
	GameTime_t m_fllastSimulationTime; // 0xbac	
private:
	[[maybe_unused]] uint8_t __pad0bb0[0x2280]; // 0xbb0
public:
	bool m_bExplodeFromInferno; // 0x2e30	
	
	// Datamap fields:
	// void CSmokeGrenadeProjectileThink_Detonate; // 0x0
	// void CSmokeGrenadeProjectileThink_Update; // 0x0
	// void CSmokeGrenadeProjectileThink_Remove; // 0x0
	// void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
	// void InitializeSpawnFromWorld; // 0x0
};


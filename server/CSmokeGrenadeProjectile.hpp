#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2df0
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
	[[maybe_unused]] uint8_t __pad0b08[0x18]; // 0xb08
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0xb20	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0xb24	
private:
	[[maybe_unused]] uint8_t __pad0b25[0x3]; // 0xb25
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0xb28	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0xb2c	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b44[0x4]; // 0xb44
public:
	// MNetworkEnable
	CUtlVector< uint8 > m_VoxelFrameData; // 0xb48	
	GameTime_t m_flLastBounce; // 0xb60	
	GameTime_t m_fllastSimulationTime; // 0xb64	
private:
	[[maybe_unused]] uint8_t __pad0b68[0x2280]; // 0xb68
public:
	bool m_bExplodeFromInferno; // 0x2de8	
	
	// Datamap fields:
	// void CSmokeGrenadeProjectileThink_Detonate; // 0x0
	// void CSmokeGrenadeProjectileThink_Update; // 0x0
	// void CSmokeGrenadeProjectileThink_Remove; // 0x0
	// void CSmokeGrenadeProjectileThink_BuildingSmokeVolume; // 0x0
	// void InitializeSpawnFromWorld; // 0x0
};


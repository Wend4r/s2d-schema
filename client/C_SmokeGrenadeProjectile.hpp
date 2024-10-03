#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13a0
// Has VTable
// 
// MNetworkVarNames "int m_nSmokeEffectTickBegin"
// MNetworkVarNames "bool m_bDidSmokeEffect"
// MNetworkVarNames "int m_nRandomSeed"
// MNetworkVarNames "Vector m_vSmokeColor"
// MNetworkVarNames "Vector m_vSmokeDetonationPos"
// MNetworkVarNames "CUtlVector<uint8> m_VoxelFrameData"
class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad1200[0x8]; // 0x1200
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0x1208	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0x120c	
private:
	[[maybe_unused]] uint8_t __pad120d[0x3]; // 0x120d
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0x1210	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0x1214	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0x1220	
private:
	[[maybe_unused]] uint8_t __pad122c[0x4]; // 0x122c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	CUtlVector< uint8 > m_VoxelFrameData; // 0x1230	
	bool m_bSmokeVolumeDataReceived; // 0x1248	
	bool m_bSmokeEffectSpawned; // 0x1249	
};


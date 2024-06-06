#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x12f0
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
	[[maybe_unused]] uint8_t __pad1150[0x8]; // 0x1150
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0x1158	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0x115c	
private:
	[[maybe_unused]] uint8_t __pad115d[0x3]; // 0x115d
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0x1160	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0x1164	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0x1170	
private:
	[[maybe_unused]] uint8_t __pad117c[0x4]; // 0x117c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	CUtlVector< uint8 > m_VoxelFrameData; // 0x1180	
	bool m_bSmokeVolumeDataReceived; // 0x1198	
	bool m_bSmokeEffectSpawned; // 0x1199	
};


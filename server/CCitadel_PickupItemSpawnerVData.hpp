#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_PickupItemSpawnerVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Visuals"
	// MPropertyDescription "Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // 0x28	
	float m_flModelScale; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InactiveParticle; // 0x110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveParticle; // 0x1f0	
	// MPropertyStartGroup "Pickup rewards"
	CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups; // 0x2d0	
	// MPropertyStartGroup "Gameplay"
	float m_flInitialSpawnTime; // 0x2e8	
	float m_flRespawnTime; // 0x2ec	
	float m_flInitialSpawnTimeTest; // 0x2f0	
	float m_flRespawnTimeTest; // 0x2f4	
};


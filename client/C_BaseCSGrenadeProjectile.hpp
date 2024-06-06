#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1150
// Has VTable
// 
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "int m_nBounces"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
// MNetworkVarNames "int m_nExplodeEffectTickBegin"
// MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
class C_BaseCSGrenadeProjectile : public C_BaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialPosition; // 0x10b8	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x10c4	
	// MNetworkEnable
	int32_t m_nBounces; // 0x10d0	
private:
	[[maybe_unused]] uint8_t __pad10d4[0x4]; // 0x10d4
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x10d8	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0x10e0	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0x10e4	
	GameTime_t m_flSpawnTime; // 0x10f0	
	Vector vecLastTrailLinePos; // 0x10f4	
	GameTime_t flNextTrailLineTime; // 0x1100	
	bool m_bExplodeEffectBegan; // 0x1104	
	bool m_bCanCreateGrenadeTrail; // 0x1105	
private:
	[[maybe_unused]] uint8_t __pad1106[0x2]; // 0x1106
public:
	ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x1108	
private:
	[[maybe_unused]] uint8_t __pad110c[0x4]; // 0x110c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0x1110	
	CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0x1118	
	CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0x1130	
	float m_flTrajectoryTrailEffectCreationTime; // 0x1148	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};


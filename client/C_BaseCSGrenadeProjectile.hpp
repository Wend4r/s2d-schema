#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1200
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
	Vector m_vInitialPosition; // 0x1168	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0x1174	
	// MNetworkEnable
	int32_t m_nBounces; // 0x1180	
private:
	[[maybe_unused]] uint8_t __pad1184[0x4]; // 0x1184
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0x1188	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0x1190	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0x1194	
	GameTime_t m_flSpawnTime; // 0x11a0	
	Vector vecLastTrailLinePos; // 0x11a4	
	GameTime_t flNextTrailLineTime; // 0x11b0	
	bool m_bExplodeEffectBegan; // 0x11b4	
	bool m_bCanCreateGrenadeTrail; // 0x11b5	
private:
	[[maybe_unused]] uint8_t __pad11b6[0x2]; // 0x11b6
public:
	ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x11b8	
private:
	[[maybe_unused]] uint8_t __pad11bc[0x4]; // 0x11bc
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hSnapshotTrajectoryParticleSnapshot; // 0x11c0	
	CUtlVector< Vector > m_arrTrajectoryTrailPoints; // 0x11c8	
	CUtlVector< float32 > m_arrTrajectoryTrailPointCreationTimes; // 0x11e0	
	float m_flTrajectoryTrailEffectCreationTime; // 0x11f8	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};


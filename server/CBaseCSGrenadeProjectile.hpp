#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MNetworkVarNames "Vector m_vInitialPosition"
// MNetworkVarNames "Vector m_vInitialVelocity"
// MNetworkVarNames "int m_nBounces"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
// MNetworkVarNames "int m_nExplodeEffectTickBegin"
// MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
class CBaseCSGrenadeProjectile : public CBaseGrenade
{
public:
	// MNetworkEnable
	Vector m_vInitialPosition; // 0xa98	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0xaa4	
	// MNetworkEnable
	int32_t m_nBounces; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x4]; // 0xab4
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xab8	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0xac0	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0xac4	
	GameTime_t m_flSpawnTime; // 0xad0	
	uint8_t m_unOGSExtraFlags; // 0xad4	
	bool m_bDetonationRecorded; // 0xad5	
	uint16_t m_nItemIndex; // 0xad6	
	Vector m_vecOriginalSpawnLocation; // 0xad8	
	GameTime_t m_flLastBounceSoundTime; // 0xae4	
	RotationVector m_vecGrenadeSpin; // 0xae8	
	Vector m_vecLastHitSurfaceNormal; // 0xaf4	
	int32_t m_nTicksAtZeroVelocity; // 0xb00	
	bool m_bHasEverHitPlayer; // 0xb04	
	bool m_bClearFromPlayers; // 0xb05	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};


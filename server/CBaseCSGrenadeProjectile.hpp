#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa90
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
	Vector m_vInitialPosition; // 0xa20	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0xa2c	
	// MNetworkEnable
	int32_t m_nBounces; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a3c[0x4]; // 0xa3c
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xa40	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0xa48	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0xa4c	
	GameTime_t m_flSpawnTime; // 0xa58	
	uint8_t m_unOGSExtraFlags; // 0xa5c	
	bool m_bDetonationRecorded; // 0xa5d	
	uint16_t m_nItemIndex; // 0xa5e	
	Vector m_vecOriginalSpawnLocation; // 0xa60	
	GameTime_t m_flLastBounceSoundTime; // 0xa6c	
	RotationVector m_vecGrenadeSpin; // 0xa70	
	Vector m_vecLastHitSurfaceNormal; // 0xa7c	
	int32_t m_nTicksAtZeroVelocity; // 0xa88	
	bool m_bHasEverHitPlayer; // 0xa8c	
	bool m_bClearFromPlayers; // 0xa8d	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};


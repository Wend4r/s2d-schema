#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
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
	Vector m_vInitialPosition; // 0xae0	
	// MNetworkEnable
	Vector m_vInitialVelocity; // 0xaec	
	// MNetworkEnable
	int32_t m_nBounces; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nExplodeEffectIndex; // 0xb00	
	// MNetworkEnable
	int32_t m_nExplodeEffectTickBegin; // 0xb08	
	// MNetworkEnable
	Vector m_vecExplodeEffectOrigin; // 0xb0c	
	GameTime_t m_flSpawnTime; // 0xb18	
	uint8_t m_unOGSExtraFlags; // 0xb1c	
	bool m_bDetonationRecorded; // 0xb1d	
	uint16_t m_nItemIndex; // 0xb1e	
	Vector m_vecOriginalSpawnLocation; // 0xb20	
	GameTime_t m_flLastBounceSoundTime; // 0xb2c	
	RotationVector m_vecGrenadeSpin; // 0xb30	
	Vector m_vecLastHitSurfaceNormal; // 0xb3c	
	int32_t m_nTicksAtZeroVelocity; // 0xb48	
	bool m_bHasEverHitPlayer; // 0xb4c	
	bool m_bClearFromPlayers; // 0xb4d	
	
	// Static fields:
	static float &Get_s_flThinkInterval(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->m_static_fields[0]->m_instance);};
};


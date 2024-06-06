#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0928[0x8]; // 0x928
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x930	
	CEntityIOOutput m_OnBreak; // 0x970	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x998	
	CEntityIOOutput m_OnTakeDamage; // 0x9c0	
	float m_impactEnergyScale; // 0x9e8	
	int32_t m_iMinHealthDmg; // 0x9ec	
	QAngle m_preferredCarryAngles; // 0x9f0	
	float m_flPressureDelay; // 0x9fc	
	float m_flDefBurstScale; // 0xa00	
	Vector m_vDefBurstOffset; // 0xa04	
	CHandle< CBaseEntity > m_hBreaker; // 0xa10	
	PerformanceMode_t m_PerformanceMode; // 0xa14	
	GameTime_t m_flPreventDamageBeforeTime; // 0xa18	
	bool m_bHasBreakPiecesOrCommands; // 0xa1c	
private:
	[[maybe_unused]] uint8_t __pad0a1d[0x3]; // 0xa1d
public:
	float m_explodeDamage; // 0xa20	
	float m_explodeRadius; // 0xa24	
private:
	[[maybe_unused]] uint8_t __pad0a28[0x4]; // 0xa28
public:
	float m_explosionDelay; // 0xa2c	
	CUtlSymbolLarge m_explosionBuildupSound; // 0xa30	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xa38	
	CUtlSymbolLarge m_explosionCustomSound; // 0xa40	
	CUtlSymbolLarge m_explosionModifier; // 0xa48	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xa50	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xa54	
	bool m_bOriginalBlockLOS; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a59[0x3]; // 0xa59
public:
	float m_flDefaultFadeScale; // 0xa5c	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xa60	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xa64	
	bool m_bUsePuntSound; // 0xa68	
private:
	[[maybe_unused]] uint8_t __pad0a69[0x7]; // 0xa69
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xa70	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xa78	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// bool InputSetNavIgnore; // 0x0
	// void InputEnablePuntSound; // 0x0
	// void InputDisablePuntSound; // 0x0
	// void CBreakablePropBreakThink; // 0x0
	// void CBreakablePropRampToDefaultFadeScale; // 0x0
	// uint32_t m_nExplosionType; // 0xa28
};


#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad09a0[0x8]; // 0x9a0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x9a8	
	CEntityIOOutput m_OnBreak; // 0x9e8	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xa10	
	CEntityIOOutput m_OnTakeDamage; // 0xa38	
	float m_impactEnergyScale; // 0xa60	
	int32_t m_iMinHealthDmg; // 0xa64	
	QAngle m_preferredCarryAngles; // 0xa68	
	float m_flPressureDelay; // 0xa74	
	float m_flDefBurstScale; // 0xa78	
	Vector m_vDefBurstOffset; // 0xa7c	
	CHandle< CBaseEntity > m_hBreaker; // 0xa88	
	PerformanceMode_t m_PerformanceMode; // 0xa8c	
	GameTime_t m_flPreventDamageBeforeTime; // 0xa90	
	BreakableContentsType_t m_BreakableContentsType; // 0xa94	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xa98	
	CUtlString m_strBreakableContentsParticleOverride; // 0xaa0	
	bool m_bHasBreakPiecesOrCommands; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x3]; // 0xaa9
public:
	float m_explodeDamage; // 0xaac	
	float m_explodeRadius; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x4]; // 0xab4
public:
	float m_explosionDelay; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0abc[0x4]; // 0xabc
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xac0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xac8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xad0	
	CUtlSymbolLarge m_explosionModifier; // 0xad8	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xae0	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xae4	
	bool m_bOriginalBlockLOS; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
public:
	float m_flDefaultFadeScale; // 0xaec	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xaf0	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xaf4	
	bool m_bUsePuntSound; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x7]; // 0xaf9
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xb00	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xb08	
	
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
	// uint32_t m_nExplosionType; // 0xab4
};


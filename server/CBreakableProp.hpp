#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad09b8[0x8]; // 0x9b8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x9c0	
	CEntityIOOutput m_OnBreak; // 0xa00	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xa28	
	CEntityIOOutput m_OnTakeDamage; // 0xa50	
	float m_impactEnergyScale; // 0xa78	
	int32_t m_iMinHealthDmg; // 0xa7c	
	QAngle m_preferredCarryAngles; // 0xa80	
	float m_flPressureDelay; // 0xa8c	
	float m_flDefBurstScale; // 0xa90	
	Vector m_vDefBurstOffset; // 0xa94	
	CHandle< CBaseEntity > m_hBreaker; // 0xaa0	
	PerformanceMode_t m_PerformanceMode; // 0xaa4	
	GameTime_t m_flPreventDamageBeforeTime; // 0xaa8	
	BreakableContentsType_t m_BreakableContentsType; // 0xaac	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xab0	
	CUtlString m_strBreakableContentsParticleOverride; // 0xab8	
	bool m_bHasBreakPiecesOrCommands; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac1[0x3]; // 0xac1
public:
	float m_explodeDamage; // 0xac4	
	float m_explodeRadius; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	float m_explosionDelay; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad4[0x4]; // 0xad4
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xad8	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xae0	
	CUtlSymbolLarge m_explosionCustomSound; // 0xae8	
	CUtlSymbolLarge m_explosionModifier; // 0xaf0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xaf8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xafc	
	bool m_bOriginalBlockLOS; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	float m_flDefaultFadeScale; // 0xb04	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xb08	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xb0c	
	bool m_bUsePuntSound; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b11[0x7]; // 0xb11
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xb18	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xb20	
	
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
	// uint32_t m_nExplosionType; // 0xacc
};


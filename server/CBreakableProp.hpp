#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb58
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad09e8[0x8]; // 0x9e8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x9f0	
	CEntityIOOutput m_OnBreak; // 0xa30	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xa58	
	CEntityIOOutput m_OnTakeDamage; // 0xa80	
	float m_impactEnergyScale; // 0xaa8	
	int32_t m_iMinHealthDmg; // 0xaac	
	QAngle m_preferredCarryAngles; // 0xab0	
	float m_flPressureDelay; // 0xabc	
	float m_flDefBurstScale; // 0xac0	
	Vector m_vDefBurstOffset; // 0xac4	
	CHandle< CBaseEntity > m_hBreaker; // 0xad0	
	PerformanceMode_t m_PerformanceMode; // 0xad4	
	GameTime_t m_flPreventDamageBeforeTime; // 0xad8	
	BreakableContentsType_t m_BreakableContentsType; // 0xadc	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xae0	
	CUtlString m_strBreakableContentsParticleOverride; // 0xae8	
	bool m_bHasBreakPiecesOrCommands; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af1[0x3]; // 0xaf1
public:
	float m_explodeDamage; // 0xaf4	
	float m_explodeRadius; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	float m_explosionDelay; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xb08	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xb10	
	CUtlSymbolLarge m_explosionCustomSound; // 0xb18	
	CUtlSymbolLarge m_explosionModifier; // 0xb20	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xb28	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xb2c	
	bool m_bOriginalBlockLOS; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b31[0x3]; // 0xb31
public:
	float m_flDefaultFadeScale; // 0xb34	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xb38	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xb3c	
	bool m_bUsePuntSound; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x7]; // 0xb41
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xb48	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xb50	
	
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
	// uint32_t m_nExplosionType; // 0xafc
};


#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb08
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
// MNetworkVarNames "bool m_noGhostCollision"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0998[0x8]; // 0x998
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x9a0	
	CEntityIOOutput m_OnBreak; // 0x9e0	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xa08	
	CEntityIOOutput m_OnTakeDamage; // 0xa30	
	float m_impactEnergyScale; // 0xa58	
	int32_t m_iMinHealthDmg; // 0xa5c	
	QAngle m_preferredCarryAngles; // 0xa60	
	float m_flPressureDelay; // 0xa6c	
	float m_flDefBurstScale; // 0xa70	
	Vector m_vDefBurstOffset; // 0xa74	
	CHandle< CBaseEntity > m_hBreaker; // 0xa80	
	PerformanceMode_t m_PerformanceMode; // 0xa84	
	GameTime_t m_flPreventDamageBeforeTime; // 0xa88	
	BreakableContentsType_t m_BreakableContentsType; // 0xa8c	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xa90	
	CUtlString m_strBreakableContentsParticleOverride; // 0xa98	
	bool m_bHasBreakPiecesOrCommands; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa1[0x3]; // 0xaa1
public:
	float m_explodeDamage; // 0xaa4	
	float m_explodeRadius; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aac[0x4]; // 0xaac
public:
	float m_explosionDelay; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x4]; // 0xab4
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xab8	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xac0	
	CUtlSymbolLarge m_explosionCustomSound; // 0xac8	
	CUtlSymbolLarge m_explosionModifier; // 0xad0	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xad8	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xadc	
	bool m_bOriginalBlockLOS; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0ae1[0x3]; // 0xae1
public:
	float m_flDefaultFadeScale; // 0xae4	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xae8	
	CHandle< CBaseEntity > m_hFlareEnt; // 0xaec	
	bool m_bUsePuntSound; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0af1[0x7]; // 0xaf1
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xaf8	
	// MNetworkEnable
	bool m_noGhostCollision; // 0xb00	
	
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
	// uint32_t m_nExplosionType; // 0xaac
};


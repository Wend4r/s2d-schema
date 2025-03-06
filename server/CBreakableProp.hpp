#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakableProp : public CBaseProp
{
private:
	[[maybe_unused]] uint8_t __pad0ad0[0x8]; // 0xad0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0xad8	
	CEntityIOOutput m_OnBreak; // 0xb18	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0xb40	
	CEntityIOOutput m_OnTakeDamage; // 0xb68	
	float m_impactEnergyScale; // 0xb90	
	int32_t m_iMinHealthDmg; // 0xb94	
	QAngle m_preferredCarryAngles; // 0xb98	
	float m_flPressureDelay; // 0xba4	
	float m_flDefBurstScale; // 0xba8	
	Vector m_vDefBurstOffset; // 0xbac	
	CHandle< CBaseEntity > m_hBreaker; // 0xbb8	
	PerformanceMode_t m_PerformanceMode; // 0xbbc	
	GameTime_t m_flPreventDamageBeforeTime; // 0xbc0	
	BreakableContentsType_t m_BreakableContentsType; // 0xbc4	
	CUtlString m_strBreakableContentsPropGroupOverride; // 0xbc8	
	CUtlString m_strBreakableContentsParticleOverride; // 0xbd0	
	bool m_bHasBreakPiecesOrCommands; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bd9[0x3]; // 0xbd9
public:
	float m_explodeDamage; // 0xbdc	
	float m_explodeRadius; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be4[0x4]; // 0xbe4
public:
	float m_explosionDelay; // 0xbe8	
private:
	[[maybe_unused]] uint8_t __pad0bec[0x4]; // 0xbec
public:
	CUtlSymbolLarge m_explosionBuildupSound; // 0xbf0	
	CUtlSymbolLarge m_explosionCustomEffect; // 0xbf8	
	CUtlSymbolLarge m_explosionCustomSound; // 0xc00	
	CUtlSymbolLarge m_explosionModifier; // 0xc08	
	int32_t m_explosionDangerSound; // 0xc10	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0xc14	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0xc18	
	bool m_bOriginalBlockLOS; // 0xc1c	
private:
	[[maybe_unused]] uint8_t __pad0c1d[0x3]; // 0xc1d
public:
	float m_flDefaultFadeScale; // 0xc20	
	CHandle< CBaseEntity > m_hLastAttacker; // 0xc24	
	bool m_bUsePuntSound; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x7]; // 0xc29
public:
	CUtlSymbolLarge m_iszPuntSound; // 0xc30	
	
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
	// uint32_t m_nExplosionType; // 0xbe4
};


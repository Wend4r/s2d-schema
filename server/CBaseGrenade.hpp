#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_nResetEventsParity"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_baseLayer.m_hSequence"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByName "m_nNewSequenceParity"
// MNetworkVarNames "bool m_bIsLive"
// MNetworkVarNames "float32 m_DmgRadius"
// MNetworkVarNames "GameTime_t m_flDetonateTime"
// MNetworkVarNames "float32 m_flDamage"
// MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
class CBaseGrenade : public CBaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0978[0x8]; // 0x978
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x980	
	CEntityIOOutput m_OnExplode; // 0x9a8	
	bool m_bHasWarnedAI; // 0x9d0	
	bool m_bIsSmokeGrenade; // 0x9d1	
	// MNetworkEnable
	bool m_bIsLive; // 0x9d2	
private:
	[[maybe_unused]] uint8_t __pad09d3[0x1]; // 0x9d3
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0x9d4	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x9d8	
	float m_flWarnAITime; // 0x9dc	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0x9e0	
private:
	[[maybe_unused]] uint8_t __pad09e4[0x4]; // 0x9e4
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x9e8	
	CUtlString m_ExplosionSound; // 0x9f0	
private:
	[[maybe_unused]] uint8_t __pad09f8[0x4]; // 0x9f8
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hThrower; // 0x9fc	
private:
	[[maybe_unused]] uint8_t __pad0a00[0x14]; // 0xa00
public:
	GameTime_t m_flNextAttack; // 0xa14	
	CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0xa18	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0x9f8
	// void CBaseGrenadeSmoke; // 0x0
	// void CBaseGrenadeBounceTouch; // 0x0
	// void CBaseGrenadeSlideTouch; // 0x0
	// void CBaseGrenadeExplodeTouch; // 0x0
	// void CBaseGrenadeDetonateUse; // 0x0
	// void CBaseGrenadeDangerSoundThink; // 0x0
	// void CBaseGrenadePreDetonate; // 0x0
	// void CBaseGrenadeDetonate; // 0x0
	// void CBaseGrenadeTumbleThink; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa98
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
	[[maybe_unused]] uint8_t __pad09f0[0x8]; // 0x9f0
public:
	CEntityIOOutput m_OnPlayerPickup; // 0x9f8	
	CEntityIOOutput m_OnExplode; // 0xa20	
	bool m_bHasWarnedAI; // 0xa48	
	bool m_bIsSmokeGrenade; // 0xa49	
	// MNetworkEnable
	bool m_bIsLive; // 0xa4a	
private:
	[[maybe_unused]] uint8_t __pad0a4b[0x1]; // 0xa4b
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0xa4c	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0xa50	
	float m_flWarnAITime; // 0xa54	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0xa58	
private:
	[[maybe_unused]] uint8_t __pad0a5c[0x4]; // 0xa5c
public:
	CUtlSymbolLarge m_iszBounceSound; // 0xa60	
	CUtlString m_ExplosionSound; // 0xa68	
private:
	[[maybe_unused]] uint8_t __pad0a70[0x4]; // 0xa70
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hThrower; // 0xa74	
private:
	[[maybe_unused]] uint8_t __pad0a78[0x14]; // 0xa78
public:
	GameTime_t m_flNextAttack; // 0xa8c	
	CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0xa90	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0xa70
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


#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae0
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
	[[maybe_unused]] uint8_t __pad0a38[0x8]; // 0xa38
public:
	CEntityIOOutput m_OnPlayerPickup; // 0xa40	
	CEntityIOOutput m_OnExplode; // 0xa68	
	bool m_bHasWarnedAI; // 0xa90	
	bool m_bIsSmokeGrenade; // 0xa91	
	// MNetworkEnable
	bool m_bIsLive; // 0xa92	
private:
	[[maybe_unused]] uint8_t __pad0a93[0x1]; // 0xa93
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0xa94	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0xa98	
	float m_flWarnAITime; // 0xa9c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0x4]; // 0xaa4
public:
	CUtlSymbolLarge m_iszBounceSound; // 0xaa8	
	CUtlString m_ExplosionSound; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab8[0x4]; // 0xab8
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hThrower; // 0xabc	
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x14]; // 0xac0
public:
	GameTime_t m_flNextAttack; // 0xad4	
	CHandle< CCSPlayerPawn > m_hOriginalThrower; // 0xad8	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0xab8
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


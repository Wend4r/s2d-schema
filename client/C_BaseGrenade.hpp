#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1170
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
class C_BaseGrenade : public C_BaseFlex
{
public:
	bool m_bHasWarnedAI; // 0x1120	
	bool m_bIsSmokeGrenade; // 0x1121	
	// MNetworkEnable
	bool m_bIsLive; // 0x1122	
private:
	[[maybe_unused]] uint8_t __pad1123[0x1]; // 0x1123
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0x1124	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x1128	
	float m_flWarnAITime; // 0x112c	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0x1130	
private:
	[[maybe_unused]] uint8_t __pad1134[0x4]; // 0x1134
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x1138	
	CUtlString m_ExplosionSound; // 0x1140	
private:
	[[maybe_unused]] uint8_t __pad1148[0x4]; // 0x1148
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hThrower; // 0x114c	
private:
	[[maybe_unused]] uint8_t __pad1150[0x14]; // 0x1150
public:
	GameTime_t m_flNextAttack; // 0x1164	
	CHandle< C_CSPlayerPawn > m_hOriginalThrower; // 0x1168	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0x1148
};


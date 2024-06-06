#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b8
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
	bool m_bHasWarnedAI; // 0x1068	
	bool m_bIsSmokeGrenade; // 0x1069	
	// MNetworkEnable
	bool m_bIsLive; // 0x106a	
private:
	[[maybe_unused]] uint8_t __pad106b[0x1]; // 0x106b
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags "1"
	float m_DmgRadius; // 0x106c	
	// MNetworkEnable
	GameTime_t m_flDetonateTime; // 0x1070	
	float m_flWarnAITime; // 0x1074	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "256.000000"
	// MNetworkEncodeFlags "1"
	float m_flDamage; // 0x1078	
private:
	[[maybe_unused]] uint8_t __pad107c[0x4]; // 0x107c
public:
	CUtlSymbolLarge m_iszBounceSound; // 0x1080	
	CUtlString m_ExplosionSound; // 0x1088	
private:
	[[maybe_unused]] uint8_t __pad1090[0x4]; // 0x1090
public:
	// MNetworkEnable
	CHandle< C_CSPlayerPawn > m_hThrower; // 0x1094	
private:
	[[maybe_unused]] uint8_t __pad1098[0x14]; // 0x1098
public:
	GameTime_t m_flNextAttack; // 0x10ac	
	CHandle< C_CSPlayerPawn > m_hOriginalThrower; // 0x10b0	
	
	// Datamap fields:
	// int32_t m_nExplosionType; // 0x1090
};


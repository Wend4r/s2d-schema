#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	bool m_bCreateNavObstacle; // 0xb10	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xb11	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xb12	
private:
	[[maybe_unused]] uint8_t __pad0b13[0x5]; // 0xb13
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xb18	
	CEntityIOOutput m_pOutputAnimOver; // 0xb40	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xb68	
	CEntityIOOutput m_OnAnimReachedStart; // 0xb90	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xbb8	
	CUtlSymbolLarge m_iszIdleAnim; // 0xbe0	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xbe8	
	bool m_bRandomizeCycle; // 0xbec	
	bool m_bStartDisabled; // 0xbed	
	bool m_bFiredStartEndOutput; // 0xbee	
	bool m_bForceNpcExclude; // 0xbef	
	bool m_bCreateNonSolid; // 0xbf0	
	bool m_bIsOverrideProp; // 0xbf1	
private:
	[[maybe_unused]] uint8_t __pad0bf2[0x2]; // 0xbf2
public:
	int32_t m_iInitialGlowState; // 0xbf4	
	int32_t m_nGlowRange; // 0xbf8	
	int32_t m_nGlowRangeMin; // 0xbfc	
	Color m_glowColor; // 0xc00	
	int32_t m_nGlowTeam; // 0xc04	
	
	// Datamap fields:
	// CUtlSymbolLarge StartingAnim; // 0x7fffffff
	// CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
	// CUtlSymbolLarge InputSetAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// CUtlSymbolLarge InputSetAnimation; // 0x0
	// CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimation; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
	// CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputEnableCollision; // 0x0
	// void InputDisableCollision; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// void InputStartGlowing; // 0x0
	// void InputStopGlowing; // 0x0
	// Vector InputSetGlowOverride; // 0x0
	// int32_t InputSetGlowRange; // 0x0
	// void CDynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};


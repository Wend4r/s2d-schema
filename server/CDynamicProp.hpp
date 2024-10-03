#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
public:
	bool m_bCreateNavObstacle; // 0xb18	
	bool m_bNavObstacleUpdatesOverridden; // 0xb19	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xb1a	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xb1b	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0x4]; // 0xb1c
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xb20	
	CEntityIOOutput m_pOutputAnimOver; // 0xb48	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xb70	
	CEntityIOOutput m_OnAnimReachedStart; // 0xb98	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xbc0	
	CUtlSymbolLarge m_iszIdleAnim; // 0xbe8	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xbf0	
	bool m_bRandomizeCycle; // 0xbf4	
	bool m_bStartDisabled; // 0xbf5	
	bool m_bFiredStartEndOutput; // 0xbf6	
	bool m_bForceNpcExclude; // 0xbf7	
	bool m_bCreateNonSolid; // 0xbf8	
	bool m_bIsOverrideProp; // 0xbf9	
private:
	[[maybe_unused]] uint8_t __pad0bfa[0x2]; // 0xbfa
public:
	int32_t m_iInitialGlowState; // 0xbfc	
	int32_t m_nGlowRange; // 0xc00	
	int32_t m_nGlowRangeMin; // 0xc04	
	Color m_glowColor; // 0xc08	
	int32_t m_nGlowTeam; // 0xc0c	
	
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


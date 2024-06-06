#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb80
// Has VTable
// 
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0a80[0x8]; // 0xa80
public:
	bool m_bCreateNavObstacle; // 0xa88	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xa89	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xa8a	
private:
	[[maybe_unused]] uint8_t __pad0a8b[0x5]; // 0xa8b
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xa90	
	CEntityIOOutput m_pOutputAnimOver; // 0xab8	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xae0	
	CEntityIOOutput m_OnAnimReachedStart; // 0xb08	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xb30	
	CUtlSymbolLarge m_iszIdleAnim; // 0xb58	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xb60	
	bool m_bRandomizeCycle; // 0xb64	
	bool m_bStartDisabled; // 0xb65	
	bool m_bFiredStartEndOutput; // 0xb66	
	bool m_bForceNpcExclude; // 0xb67	
	bool m_bCreateNonSolid; // 0xb68	
	bool m_bIsOverrideProp; // 0xb69	
private:
	[[maybe_unused]] uint8_t __pad0b6a[0x2]; // 0xb6a
public:
	int32_t m_iInitialGlowState; // 0xb6c	
	int32_t m_nGlowRange; // 0xb70	
	int32_t m_nGlowRangeMin; // 0xb74	
	Color m_glowColor; // 0xb78	
	int32_t m_nGlowTeam; // 0xb7c	
	
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


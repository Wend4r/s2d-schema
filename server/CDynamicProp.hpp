#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0b58[0x8]; // 0xb58
public:
	bool m_bCreateNavObstacle; // 0xb60	
	bool m_bNavObstacleUpdatesOverridden; // 0xb61	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xb62	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xb63	
private:
	[[maybe_unused]] uint8_t __pad0b64[0x4]; // 0xb64
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xb68	
	CEntityIOOutput m_pOutputAnimOver; // 0xb90	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbb8	
	CEntityIOOutput m_OnAnimReachedStart; // 0xbe0	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xc08	
	CUtlSymbolLarge m_iszIdleAnim; // 0xc30	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc38	
	bool m_bRandomizeCycle; // 0xc3c	
	bool m_bStartDisabled; // 0xc3d	
	bool m_bFiredStartEndOutput; // 0xc3e	
	bool m_bForceNpcExclude; // 0xc3f	
	bool m_bCreateNonSolid; // 0xc40	
	bool m_bIsOverrideProp; // 0xc41	
private:
	[[maybe_unused]] uint8_t __pad0c42[0x2]; // 0xc42
public:
	int32_t m_iInitialGlowState; // 0xc44	
	int32_t m_nGlowRange; // 0xc48	
	int32_t m_nGlowRangeMin; // 0xc4c	
	Color m_glowColor; // 0xc50	
	int32_t m_nGlowTeam; // 0xc54	
	
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


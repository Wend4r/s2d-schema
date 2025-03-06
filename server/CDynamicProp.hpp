#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class CDynamicProp : public CBreakableProp
{
private:
	[[maybe_unused]] uint8_t __pad0c38[0x8]; // 0xc38
public:
	bool m_bCreateNavObstacle; // 0xc40	
	bool m_bNavObstacleUpdatesOverridden; // 0xc41	
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xc42	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xc43	
private:
	[[maybe_unused]] uint8_t __pad0c44[0x4]; // 0xc44
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xc48	
	CEntityIOOutput m_pOutputAnimOver; // 0xc70	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc98	
	CEntityIOOutput m_OnAnimReachedStart; // 0xcc0	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xce8	
	CUtlSymbolLarge m_iszIdleAnim; // 0xd10	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xd18	
	bool m_bRandomizeCycle; // 0xd1c	
	bool m_bStartDisabled; // 0xd1d	
	bool m_bFiredStartEndOutput; // 0xd1e	
	bool m_bForceNpcExclude; // 0xd1f	
	bool m_bCreateNonSolid; // 0xd20	
	bool m_bIsOverrideProp; // 0xd21	
private:
	[[maybe_unused]] uint8_t __pad0d22[0x2]; // 0xd22
public:
	int32_t m_iInitialGlowState; // 0xd24	
	int32_t m_nGlowRange; // 0xd28	
	int32_t m_nGlowRangeMin; // 0xd2c	
	Color m_glowColor; // 0xd30	
	int32_t m_nGlowTeam; // 0xd34	
	
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


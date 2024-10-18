#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1228
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0x1110	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0x1111	
private:
	[[maybe_unused]] uint8_t __pad1112[0x6]; // 0x1112
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x1118	
	CEntityIOOutput m_pOutputAnimOver; // 0x1140	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1168	
	CEntityIOOutput m_OnAnimReachedStart; // 0x1190	
	CEntityIOOutput m_OnAnimReachedEnd; // 0x11b8	
	CUtlSymbolLarge m_iszIdleAnim; // 0x11e0	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0x11e8	
	bool m_bRandomizeCycle; // 0x11ec	
	bool m_bStartDisabled; // 0x11ed	
	bool m_bFiredStartEndOutput; // 0x11ee	
	bool m_bForceNpcExclude; // 0x11ef	
	bool m_bCreateNonSolid; // 0x11f0	
	bool m_bIsOverrideProp; // 0x11f1	
private:
	[[maybe_unused]] uint8_t __pad11f2[0x2]; // 0x11f2
public:
	int32_t m_iInitialGlowState; // 0x11f4	
	int32_t m_nGlowRange; // 0x11f8	
	int32_t m_nGlowRangeMin; // 0x11fc	
	Color m_glowColor; // 0x1200	
	int32_t m_nGlowTeam; // 0x1204	
	int32_t m_iCachedFrameCount; // 0x1208	
	Vector m_vecCachedRenderMins; // 0x120c	
	Vector m_vecCachedRenderMaxs; // 0x1218	
	
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
	// void C_DynamicPropAnimThink; // 0x0
	// int32_t health; // 0x7fffffff
	// bool HoldAnimation; // 0x7fffffff
};


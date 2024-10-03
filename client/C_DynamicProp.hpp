#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1220
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0x1108	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0x1109	
private:
	[[maybe_unused]] uint8_t __pad110a[0x6]; // 0x110a
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x1110	
	CEntityIOOutput m_pOutputAnimOver; // 0x1138	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1160	
	CEntityIOOutput m_OnAnimReachedStart; // 0x1188	
	CEntityIOOutput m_OnAnimReachedEnd; // 0x11b0	
	CUtlSymbolLarge m_iszIdleAnim; // 0x11d8	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0x11e0	
	bool m_bRandomizeCycle; // 0x11e4	
	bool m_bStartDisabled; // 0x11e5	
	bool m_bFiredStartEndOutput; // 0x11e6	
	bool m_bForceNpcExclude; // 0x11e7	
	bool m_bCreateNonSolid; // 0x11e8	
	bool m_bIsOverrideProp; // 0x11e9	
private:
	[[maybe_unused]] uint8_t __pad11ea[0x2]; // 0x11ea
public:
	int32_t m_iInitialGlowState; // 0x11ec	
	int32_t m_nGlowRange; // 0x11f0	
	int32_t m_nGlowRangeMin; // 0x11f4	
	Color m_glowColor; // 0x11f8	
	int32_t m_nGlowTeam; // 0x11fc	
	int32_t m_iCachedFrameCount; // 0x1200	
	Vector m_vecCachedRenderMins; // 0x1204	
	Vector m_vecCachedRenderMaxs; // 0x1210	
	
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


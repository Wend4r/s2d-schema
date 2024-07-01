#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0xbf8	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0xbf9	
private:
	[[maybe_unused]] uint8_t __pad0bfa[0x6]; // 0xbfa
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0xc00	
	CEntityIOOutput m_pOutputAnimOver; // 0xc28	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc50	
	CEntityIOOutput m_OnAnimReachedStart; // 0xc78	
	CEntityIOOutput m_OnAnimReachedEnd; // 0xca0	
	CUtlSymbolLarge m_iszIdleAnim; // 0xcc8	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcd0	
	bool m_bRandomizeCycle; // 0xcd4	
	bool m_bStartDisabled; // 0xcd5	
	bool m_bFiredStartEndOutput; // 0xcd6	
	bool m_bForceNpcExclude; // 0xcd7	
	bool m_bCreateNonSolid; // 0xcd8	
	bool m_bIsOverrideProp; // 0xcd9	
private:
	[[maybe_unused]] uint8_t __pad0cda[0x2]; // 0xcda
public:
	int32_t m_iInitialGlowState; // 0xcdc	
	int32_t m_nGlowRange; // 0xce0	
	int32_t m_nGlowRangeMin; // 0xce4	
	Color m_glowColor; // 0xce8	
	int32_t m_nGlowTeam; // 0xcec	
	int32_t m_iCachedFrameCount; // 0xcf0	
	Vector m_vecCachedRenderMins; // 0xcf4	
	Vector m_vecCachedRenderMaxs; // 0xd00	
	
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


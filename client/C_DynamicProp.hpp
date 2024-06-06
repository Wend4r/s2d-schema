#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1158
// Has VTable
// 
// MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
// MNetworkVarNames "bool m_bUseAnimGraph"
class C_DynamicProp : public C_BreakableProp
{
public:
	// MNetworkEnable
	bool m_bUseHitboxesForRenderBox; // 0x1040	
	// MNetworkEnable
	bool m_bUseAnimGraph; // 0x1041	
private:
	[[maybe_unused]] uint8_t __pad1042[0x6]; // 0x1042
public:
	CEntityIOOutput m_pOutputAnimBegun; // 0x1048	
	CEntityIOOutput m_pOutputAnimOver; // 0x1070	
	CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1098	
	CEntityIOOutput m_OnAnimReachedStart; // 0x10c0	
	CEntityIOOutput m_OnAnimReachedEnd; // 0x10e8	
	CUtlSymbolLarge m_iszIdleAnim; // 0x1110	
	AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1118	
	bool m_bRandomizeCycle; // 0x111c	
	bool m_bStartDisabled; // 0x111d	
	bool m_bFiredStartEndOutput; // 0x111e	
	bool m_bForceNpcExclude; // 0x111f	
	bool m_bCreateNonSolid; // 0x1120	
	bool m_bIsOverrideProp; // 0x1121	
private:
	[[maybe_unused]] uint8_t __pad1122[0x2]; // 0x1122
public:
	int32_t m_iInitialGlowState; // 0x1124	
	int32_t m_nGlowRange; // 0x1128	
	int32_t m_nGlowRangeMin; // 0x112c	
	Color m_glowColor; // 0x1130	
	int32_t m_nGlowTeam; // 0x1134	
	int32_t m_iCachedFrameCount; // 0x1138	
	Vector m_vecCachedRenderMins; // 0x113c	
	Vector m_vecCachedRenderMaxs; // 0x1148	
	
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


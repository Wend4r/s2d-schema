#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CJumpHelperUpdateNode : public CSequenceUpdateNode
{
public:
	CAnimParamHandle m_hTargetParam; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00aa[0x2]; // 0xaa
public:
	Vector m_flOriginalJumpMovement; // 0xac	
	float m_flOriginalJumpDuration; // 0xb8	
	float m_flJumpStartCycle; // 0xbc	
	float m_flJumpEndCycle; // 0xc0	
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc4	
	bool m_bTranslationAxis[3]; // 0xc8	
	bool m_bScaleSpeed; // 0xcb	
};


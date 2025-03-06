#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CMoverUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
public:
	CAnimInputDamping m_damping; // 0x78	
	AnimValueSource m_facingTarget; // 0x90	
	CAnimParamHandle m_hMoveVecParam; // 0x94	
	CAnimParamHandle m_hMoveHeadingParam; // 0x96	
	CAnimParamHandle m_hTurnToFaceParam; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad009a[0x2]; // 0x9a
public:
	float m_flTurnToFaceOffset; // 0x9c	
	float m_flTurnToFaceLimit; // 0xa0	
	bool m_bAdditive; // 0xa4	
	bool m_bApplyMovement; // 0xa5	
	bool m_bOrientMovement; // 0xa6	
	bool m_bApplyRotation; // 0xa7	
	bool m_bLimitOnly; // 0xa8	
};


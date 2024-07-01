#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CMoverUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	CAnimInputDamping m_damping; // 0x70	
	AnimValueSource m_facingTarget; // 0x80	
	CAnimParamHandle m_hMoveVecParam; // 0x84	
	CAnimParamHandle m_hMoveHeadingParam; // 0x86	
	CAnimParamHandle m_hTurnToFaceParam; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008a[0x2]; // 0x8a
public:
	float m_flTurnToFaceOffset; // 0x8c	
	float m_flTurnToFaceLimit; // 0x90	
	bool m_bAdditive; // 0x94	
	bool m_bApplyMovement; // 0x95	
	bool m_bOrientMovement; // 0x96	
	bool m_bApplyRotation; // 0x97	
	bool m_bLimitOnly; // 0x98	
};


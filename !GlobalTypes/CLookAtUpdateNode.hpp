#pragma once

#include <cstdint>

struct LookAtOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x150
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookAtUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	// -> m_attachment - 0x70
	// -> m_damping - 0xf0
	// -> m_bones - 0x100
	// -> m_flYawLimit - 0x118
	// -> m_flPitchLimit - 0x11c
	// -> m_flHysteresisInnerAngle - 0x120
	// -> m_flHysteresisOuterAngle - 0x124
	// -> m_bRotateYawForward - 0x128
	// -> m_bMaintainUpDirection - 0x129
	// -> m_bTargetIsPosition - 0x12a
	// -> m_bUseHysteresis - 0x12b
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0130[0x8]; // 0x130
public:
	AnimVectorSource m_target; // 0x138	
	CAnimParamHandle m_paramIndex; // 0x13c	
	CAnimParamHandle m_weightParamIndex; // 0x13e	
	bool m_bResetChild; // 0x140	
	bool m_bLockWhenWaning; // 0x141	
};


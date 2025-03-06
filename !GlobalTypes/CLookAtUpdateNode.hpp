#pragma once

#include <cstdint>

struct LookAtOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookAtUpdateNode : public CUnaryUpdateNode
{
public:
	// -> m_attachment - 0x70
	// -> m_damping - 0xf0
	// -> m_bones - 0x108
	// -> m_flYawLimit - 0x120
	// -> m_flPitchLimit - 0x124
	// -> m_flHysteresisInnerAngle - 0x128
	// -> m_flHysteresisOuterAngle - 0x12c
	// -> m_bRotateYawForward - 0x130
	// -> m_bMaintainUpDirection - 0x131
	// -> m_bTargetIsPosition - 0x132
	// -> m_bUseHysteresis - 0x133
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0140[0x8]; // 0x140
public:
	AnimVectorSource m_target; // 0x148	
	CAnimParamHandle m_paramIndex; // 0x14c	
	CAnimParamHandle m_weightParamIndex; // 0x14e	
	bool m_bResetChild; // 0x150	
	bool m_bLockWhenWaning; // 0x151	
};


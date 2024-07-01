#pragma once

#include <cstdint>

struct CAnimAttachment;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0xc0
// 
// MGetKV3ClassDefaults
struct LookAtOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	CUtlVector< LookAtBone_t > m_bones; // 0x90	
	float m_flYawLimit; // 0xa8	
	float m_flPitchLimit; // 0xac	
	float m_flHysteresisInnerAngle; // 0xb0	
	float m_flHysteresisOuterAngle; // 0xb4	
	bool m_bRotateYawForward; // 0xb8	
	bool m_bMaintainUpDirection; // 0xb9	
	bool m_bTargetIsPosition; // 0xba	
	bool m_bUseHysteresis; // 0xbb	
};


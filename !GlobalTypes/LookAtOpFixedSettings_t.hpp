#pragma once

#include <cstdint>

struct CAnimAttachment;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0xd0
// 
// MGetKV3ClassDefaults
struct LookAtOpFixedSettings_t
{
public:
	CAnimAttachment m_attachment; // 0x0	
	CAnimInputDamping m_damping; // 0x80	
	CUtlVector< LookAtBone_t > m_bones; // 0x98	
	float m_flYawLimit; // 0xb0	
	float m_flPitchLimit; // 0xb4	
	float m_flHysteresisInnerAngle; // 0xb8	
	float m_flHysteresisOuterAngle; // 0xbc	
	bool m_bRotateYawForward; // 0xc0	
	bool m_bMaintainUpDirection; // 0xc1	
	bool m_bTargetIsPosition; // 0xc2	
	bool m_bUseHysteresis; // 0xc3	
};


#pragma once

#include <cstdint>

struct CAnimAttachment;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x160
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct TwoBoneIKSettings_t
{
public:
	IkEndEffectorType m_endEffectorType; // 0x0	
	CAnimAttachment m_endEffectorAttachment; // 0x10	
	IkTargetType m_targetType; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0094[0xc]; // 0x94
public:
	CAnimAttachment m_targetAttachment; // 0xa0	
	int32_t m_targetBoneIndex; // 0x120	
	CAnimParamHandle m_hPositionParam; // 0x124	
	CAnimParamHandle m_hRotationParam; // 0x126	
	bool m_bAlwaysUseFallbackHinge; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad0129[0x7]; // 0x129
public:
	VectorAligned m_vLsFallbackHingeAxis; // 0x130	
	int32_t m_nFixedBoneIndex; // 0x140	
	int32_t m_nMiddleBoneIndex; // 0x144	
	int32_t m_nEndBoneIndex; // 0x148	
	bool m_bMatchTargetOrientation; // 0x14c	
	bool m_bConstrainTwist; // 0x14d	
private:
	[[maybe_unused]] uint8_t __pad014e[0x2]; // 0x14e
public:
	float m_flMaxTwist; // 0x150	
};


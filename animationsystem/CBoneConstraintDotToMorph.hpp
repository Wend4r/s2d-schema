#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CBoneConstraintDotToMorph : public CBoneConstraintBase
{
public:
	CUtlString m_sBoneName; // 0x28	
	CUtlString m_sTargetBoneName; // 0x30	
	CUtlString m_sMorphChannelName; // 0x38	
	float m_flRemap[4]; // 0x40	
};


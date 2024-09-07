#pragma once

#include <cstdint>

struct FollowTargetOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
class CFollowTargetUpdateNode : public CUnaryUpdateNode
{
public:
	// -> m_boneIndex - 0x68
	// -> m_bBoneTarget - 0x6c
	// -> m_boneTargetIndex - 0x70
	// -> m_bWorldCoodinateTarget - 0x74
	// -> m_bMatchTargetOrientation - 0x75
	FollowTargetOpFixedSettings_t m_opFixedData; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	CAnimParamHandle m_hParameterPosition; // 0x80	
	CAnimParamHandle m_hParameterOrientation; // 0x82	
};


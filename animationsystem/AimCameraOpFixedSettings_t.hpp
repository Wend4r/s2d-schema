#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct AimCameraOpFixedSettings_t
{
public:
	int32_t m_nChainIndex; // 0x0	
	int32_t m_nCameraJointIndex; // 0x4	
	int32_t m_nPelvisJointIndex; // 0x8	
	int32_t m_nClavicleLeftJointIndex; // 0xc	
	int32_t m_nClavicleRightJointIndex; // 0x10	
	int32_t m_nDepenetrationJointIndex; // 0x14	
	CUtlVector< int32 > m_propJoints; // 0x18	
};


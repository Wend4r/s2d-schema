#pragma once

#include <cstdint>

struct SolveIKChainPoseOpFixedSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CSolveIKChainUpdateNode : public CUnaryUpdateNode
{
public:
	CUtlVector< CSolveIKTargetHandle_t > m_targetHandles; // 0x68	
	SolveIKChainPoseOpFixedSettings_t m_opFixedData; // 0x80	
};


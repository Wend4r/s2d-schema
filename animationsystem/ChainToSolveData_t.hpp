#pragma once

#include <cstdint>

struct IKSolverSettings_t;
struct IKTargetSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x50
// 
// MGetKV3ClassDefaults
struct ChainToSolveData_t
{
public:
	int32_t m_nChainIndex; // 0x0	
	IKSolverSettings_t m_SolverSettings; // 0x4	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	IKTargetSettings_t m_TargetSettings; // 0x10	
	SolveIKChainAnimNodeDebugSetting m_DebugSetting; // 0x38	
	float m_flDebugNormalizedValue; // 0x3c	
	VectorAligned m_vDebugOffset; // 0x40	
};


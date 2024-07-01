#pragma once

#include <cstdint>

struct FootPinningPoseOpFixedData_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
class CFootPinningUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70	
	FootPinningTimingSource m_eTimingSource; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	CUtlVector< CAnimParamHandle > m_params; // 0xa8	
	bool m_bResetChild; // 0xc0	
};


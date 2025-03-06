#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
struct HSequence;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
class CLeanMatrixUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
public:
	int32_t m_frameCorners[3][3]; // 0x5c	
	CPoseHandle m_poses[9]; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	CAnimInputDamping m_damping; // 0xa8	
	AnimVectorSource m_blendSource; // 0xc0	
	CAnimParamHandle m_paramIndex; // 0xc4	
private:
	[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
public:
	Vector m_verticalAxis; // 0xc8	
	Vector m_horizontalAxis; // 0xd4	
	HSequence m_hSequence; // 0xe0	
	float m_flMaxValue; // 0xe4	
	int32_t m_nSequenceMaxFrame; // 0xe8	
};


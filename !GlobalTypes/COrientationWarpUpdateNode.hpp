#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
class COrientationWarpUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
public:
	CAnimParamHandle m_hFacingPositionParameter; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
public:
	CAnimInputDamping m_turnDamping; // 0x70	
};


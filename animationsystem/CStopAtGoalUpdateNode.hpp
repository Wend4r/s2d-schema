#pragma once

#include <cstdint>

struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CStopAtGoalUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	float m_flOuterRadius; // 0x74	
	float m_flInnerRadius; // 0x78	
	float m_flMaxScale; // 0x7c	
	float m_flMinScale; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	CAnimInputDamping m_damping; // 0x88	
};


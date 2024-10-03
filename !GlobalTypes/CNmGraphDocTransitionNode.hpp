#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTransitionNode : public CNmGraphDocResultNode
{
public:
	NmEasingOperation_t m_blendWeightEasing; // 0x100	
	NmRootMotionBlendMode_t m_rootMotionBlend; // 0x101	
private:
	[[maybe_unused]] uint8_t __pad0102[0x2]; // 0x102
public:
	float m_flDurationSeconds; // 0x104	
	bool m_bClampDurationToSource; // 0x108	
	bool m_bCanBeForced; // 0x109	
private:
	[[maybe_unused]] uint8_t __pad010a[0x2]; // 0x10a
public:
	CNmGraphDocTransitionNode::TimeMatchMode_t m_timeMatchMode; // 0x10c	
	float m_syncEventOffset; // 0x110	
	float m_flBoneMaskBlendInTimePercentage; // 0x114	
};


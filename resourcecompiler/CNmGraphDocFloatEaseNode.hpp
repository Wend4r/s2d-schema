#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatEaseNode : public CNmGraphDocFlowNode
{
public:
	NmEasingOperation_t m_easing; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x3]; // 0xf9
public:
	float m_flEaseTime; // 0xfc	
	bool m_bUseStartValue; // 0x100	
private:
	[[maybe_unused]] uint8_t __pad0101[0x3]; // 0x101
public:
	float m_flStartValue; // 0x104	
};


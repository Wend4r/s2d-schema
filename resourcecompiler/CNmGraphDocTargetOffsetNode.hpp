#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetOffsetNode : public CNmGraphDocFlowNode
{
public:
	bool m_bIsBoneSpaceOffset; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x3]; // 0xf9
public:
	QAngle m_rotationOffset; // 0xfc	
	Vector m_translationOffset; // 0x108	
};


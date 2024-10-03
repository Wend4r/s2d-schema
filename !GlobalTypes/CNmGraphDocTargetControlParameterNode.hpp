#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	bool m_bIsSet; // 0x100	
	bool m_bIsBoneID; // 0x101	
private:
	[[maybe_unused]] uint8_t __pad0102[0x2]; // 0x102
public:
	QAngle m_targetOrientation; // 0x104	
	Vector m_targetPosition; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
public:
	CGlobalSymbol m_previewStartBoneID; // 0x120	
};


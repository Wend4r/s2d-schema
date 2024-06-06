#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode
{
public:
	bool m_bIsSet; // 0xf8	
	bool m_bIsBoneID; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x2]; // 0xfa
public:
	QAngle m_targetOrientation; // 0xfc	
	Vector m_targetPosition; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0114[0x4]; // 0x114
public:
	CGlobalSymbol m_previewStartBoneID; // 0x118	
};


#pragma once

#include <cstdint>

struct CNmGraphDocGraph;
// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocNode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	V_uuid_t m_ID; // 0x8	
	CUtlString m_name; // 0x18	
	// MPropertySuppressField
	Vector2D m_position; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	// MPropertySuppressField
	CNmGraphDocGraph* m_pChildGraph; // 0x30	
	// MPropertySuppressField
	CNmGraphDocGraph* m_pSecondaryGraph; // 0x38	
};


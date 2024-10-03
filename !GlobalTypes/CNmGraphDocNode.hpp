#pragma once

#include <cstdint>

struct CNmGraphDocGraph;
// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x48
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
	// MPropertyHideField
	CUtlString m_name; // 0x18	
	CUtlString m_floatingComment; // 0x20	
	// MPropertySuppressField
	Vector2D m_position; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertySuppressField
	CNmGraphDocGraph* m_pChildGraph; // 0x38	
	// MPropertySuppressField
	CNmGraphDocGraph* m_pSecondaryGraph; // 0x40	
};


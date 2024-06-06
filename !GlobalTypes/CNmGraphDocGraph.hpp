#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	V_uuid_t m_ID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
public:
	CUtlVector< CNmGraphDocNode* > m_nodes; // 0x20	
	NmGraphDocGraphType_t m_graphType; // 0x38	
};


#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
struct NmGraphDocPin_t
{
public:
	V_uuid_t m_ID; // 0x0	
	CUtlString m_name; // 0x10	
	NmGraphValueType_t m_type; // 0x18	
	bool m_bIsDynamicPin; // 0x19	
	bool m_bAllowMultipleOutConnections; // 0x1a	
};


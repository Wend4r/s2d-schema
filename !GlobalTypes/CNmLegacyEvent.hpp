#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmLegacyEvent : public CNmEvent
{
public:
	CUtlString m_animEventClassName; // 0x18	
	KeyValues3 m_KV; // 0x20	
};


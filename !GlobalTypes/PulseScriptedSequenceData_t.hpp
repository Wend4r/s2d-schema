#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct PulseScriptedSequenceData_t
{
public:
	int32_t m_nActorID; // 0x0	
	CUtlString m_szPreIdleSequence; // 0x8	
	CUtlString m_szEntrySequence; // 0x10	
	CUtlString m_szSequence; // 0x18	
	CUtlString m_szExitSequence; // 0x20	
	bool m_bLoopPreIdleSequence; // 0x28	
	bool m_bLoopActionSequence; // 0x29	
	bool m_bLoopPostIdleSequence; // 0x2a	
	bool m_bIgnoreLookAt; // 0x2b	
};


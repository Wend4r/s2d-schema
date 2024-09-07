#pragma once

#include <cstdint>

struct PulseGraphInstanceID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x78
// 
// MGetKV3ClassDefaults
class CPulseGraphExecutionHistory
{
public:
	PulseGraphInstanceID_t m_nInstanceID; // 0x0	
	CUtlString m_strFileName; // 0x8	
	CUtlVector< PulseGraphExecutionHistoryEntry_t* > m_vecHistory; // 0x10	
	CUtlOrderedMap< PulseDocNodeID_t, PulseGraphExecutionHistoryNodeDesc_t* > m_mapCellDesc; // 0x28	
	CUtlOrderedMap< PulseCursorID_t, PulseGraphExecutionHistoryCursorDesc_t* > m_mapCursorDesc; // 0x50	
};


#pragma once

#include <cstdint>

struct HSequence;
struct CParamSpanUpdater;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CSequenceUpdateNode : public CSequenceUpdateNodeBase
{
public:
	HSequence m_hSequence; // 0x70	
	float m_duration; // 0x74	
	CParamSpanUpdater m_paramSpans; // 0x78	
	CUtlVector< TagSpan_t > m_tags; // 0x90	
};


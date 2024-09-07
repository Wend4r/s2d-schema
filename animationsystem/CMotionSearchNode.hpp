#pragma once

#include <cstdint>

struct CVectorQuantizer;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CMotionSearchNode
{
public:
	CUtlVector< CMotionSearchNode* > m_children; // 0x0	
	CVectorQuantizer m_quantizer; // 0x18	
	CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // 0x38	
	CUtlVector< CUtlVector< int32 > > m_sampleIndices; // 0x50	
	CUtlVector< int32 > m_selectableSamples; // 0x68	
};


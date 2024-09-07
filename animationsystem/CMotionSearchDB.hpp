#pragma once

#include <cstdint>

struct CMotionSearchNode;
struct CProductQuantizer;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb8
// 
// MGetKV3ClassDefaults
class CMotionSearchDB
{
public:
	// -> m_children - 0x0
	// -> m_quantizer - 0x18
	// -> m_sampleCodes - 0x38
	// -> m_sampleIndices - 0x50
	// -> m_selectableSamples - 0x68
	CMotionSearchNode m_rootNode; // 0x0	
	// -> m_subQuantizers - 0x80
	// -> m_nDimensions - 0x98
	CProductQuantizer m_residualQuantizer; // 0x80	
	CUtlVector< MotionDBIndex > m_codeIndices; // 0xa0	
};


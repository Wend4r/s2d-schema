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
	CMotionSearchNode m_rootNode; // 0x0	
	// -> m_subQuantizers - 0x80
	// -> m_nDimensions - 0x98
	CProductQuantizer m_residualQuantizer; // 0x80	
	CUtlVector< MotionDBIndex > m_codeIndices; // 0xa0	
};


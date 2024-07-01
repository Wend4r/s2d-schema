#pragma once

#include <cstdint>

struct CMotionSearchDB;
struct AnimScriptHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x108
// 
// MGetKV3ClassDefaults
class CMotionGraphGroup
{
public:
	// -> m_rootNode - 0x0
	// -> m_residualQuantizer - 0x80
	// -> m_codeIndices - 0xa0
	CMotionSearchDB m_searchDB; // 0x0	
	CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // 0xb8	
	CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // 0xd0	
	CUtlVector< int32 > m_sampleToConfig; // 0xe8	
	AnimScriptHandle m_hIsActiveScript; // 0x100	
};


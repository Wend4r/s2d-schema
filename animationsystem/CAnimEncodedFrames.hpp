#pragma once

#include <cstdint>

struct CAnimEncodeDifference;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0xd8
// 
// MGetKV3ClassDefaults
class CAnimEncodedFrames
{
public:
	CBufferString m_fileName; // 0x0	
	int32_t m_nFrames; // 0x10	
	int32_t m_nFramesPerBlock; // 0x14	
	CUtlVector< CAnimFrameBlockAnim > m_frameblockArray; // 0x18	
	CAnimEncodeDifference m_usageDifferences; // 0x30	
};


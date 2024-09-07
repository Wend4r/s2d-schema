#pragma once

#include <cstdint>

struct CAnimDesc_Flag;
struct CAnimEncodedFrames;
struct CAnimSequenceParams;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 16
// Size: 0x1d0
// 
// MGetKV3ClassDefaults
class CAnimDesc
{
public:
	CBufferString m_name; // 0x0	
	// -> m_bLooping - 0x10
	// -> m_bAllZeros - 0x11
	// -> m_bHidden - 0x12
	// -> m_bDelta - 0x13
	// -> m_bLegacyWorldspace - 0x14
	// -> m_bModelDoc - 0x15
	// -> m_bImplicitSeqIgnoreDelta - 0x16
	// -> m_bAnimGraphAdditive - 0x17
	CAnimDesc_Flag m_flags; // 0x10	
	float fps; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
public:
	// MKV3TransferName "m_pData"
	// -> m_fileName - 0x20
	// -> m_nFrames - 0x30
	// -> m_nFramesPerBlock - 0x34
	// -> m_frameblockArray - 0x38
	// -> m_usageDifferences - 0x50
	CAnimEncodedFrames m_Data; // 0x20	
	CUtlVector< CAnimMovement > m_movementArray; // 0xf8	
	CTransform m_xInitialOffset; // 0x110	
	CUtlVector< CAnimEventDefinition > m_eventArray; // 0x130	
	CUtlVector< CAnimActivity > m_activityArray; // 0x148	
	CUtlVector< CAnimLocalHierarchy > m_hierarchyArray; // 0x160	
	float framestalltime; // 0x178	
	Vector m_vecRootMin; // 0x17c	
	Vector m_vecRootMax; // 0x188	
private:
	[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
public:
	CUtlVector< Vector > m_vecBoneWorldMin; // 0x198	
	CUtlVector< Vector > m_vecBoneWorldMax; // 0x1b0	
	CAnimSequenceParams m_sequenceParams; // 0x1c8	
};


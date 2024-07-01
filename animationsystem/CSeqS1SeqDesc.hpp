#pragma once

#include <cstdint>

struct CSeqSeqDescFlag;
struct CSeqMultiFetch;
struct CSeqTransition;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x120
// 
// MGetKV3ClassDefaults
class CSeqS1SeqDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001b[0x5]; // 0x1b
public:
	// -> m_flags - 0x20
	// -> m_localReferenceArray - 0x28
	// -> m_nGroupSize[2] - 0x40
	// -> m_nLocalPose[2] - 0x48
	// -> m_poseKeyArray0 - 0x50
	// -> m_poseKeyArray1 - 0x68
	// -> m_nLocalCyclePoseParameter - 0x80
	// -> m_bCalculatePoseParameters - 0x84
	// -> m_bFixedBlendWeight - 0x85
	// -> m_flFixedBlendWeightVals[2] - 0x88
	CSeqMultiFetch m_fetch; // 0x20	
	int32_t m_nLocalWeightlist; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad0094[0x4]; // 0x94
public:
	CUtlVector< CSeqAutoLayer > m_autoLayerArray; // 0x98	
	CUtlVector< CSeqIKLock > m_IKLockArray; // 0xb0	
	CSeqTransition m_transition; // 0xc8	
	KeyValues3 m_SequenceKeys; // 0xd0	
	// MKV3TransferName "m_keyValueText"
	CBufferString m_LegacyKeyValueText; // 0xe0	
	CUtlVector< CAnimActivity > m_activityArray; // 0xf0	
	CUtlVector< CFootMotion > m_footMotion; // 0x108	
};


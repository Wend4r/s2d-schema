#pragma once

#include <cstdint>

struct CSeqSeqDescFlag;
struct CSeqTransition;
// Registered binary: animationsystem.dll (project 'animationsystem')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CSeqSynthAnimDesc
{
public:
	CBufferString m_sName; // 0x0	
	CSeqSeqDescFlag m_flags; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	CSeqTransition m_transition; // 0x1c	
	int16_t m_nLocalBaseReference; // 0x24	
	int16_t m_nLocalBoneMask; // 0x26	
	CUtlVector< CAnimActivity > m_activityArray; // 0x28	
};


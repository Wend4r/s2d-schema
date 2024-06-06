#pragma once

#include <cstdint>

struct CAnimGraphDoc_MotionParameterManager;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionItem
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
public:
	// MPropertyHideField
	CAnimGraphDoc_MotionParameterManager m_paramManager; // 0x28	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_blockSpans; // 0x50	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x68	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0098[0x8]; // 0x98
public:
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xa0	
};


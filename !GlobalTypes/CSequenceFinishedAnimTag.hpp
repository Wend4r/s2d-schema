#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Sequence Finished Tag"
class CSequenceFinishedAnimTag : public CAnimTagBase
{
private:
	[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x58	
};


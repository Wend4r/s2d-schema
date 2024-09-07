#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimTagManagerUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimTagBase > > m_tags; // 0x38	
};


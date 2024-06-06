#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionParameterManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionParameter > > m_params; // 0x10	
};


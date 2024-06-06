#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimConflictBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_sConflictDesc; // 0x18	
	int32_t m_nResolveIdx; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	CAnimConflictInfo_t m_conflictData[2]; // 0x28	
	AnimConflictType_t m_eConflictType; // 0x68	
};


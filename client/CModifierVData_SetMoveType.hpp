#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierVData_SetMoveType : public CCitadelModifierVData
{
public:
	// MPropertyDescription "The move type to switch to.  Some move types will have weird behaviors when swapped to, ie: MOVETYPE_SYNC"
	MoveType_t m_nMoveType; // 0x5e0	
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "int m_nNumStacks"
class CItem_RestorativeLocket : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0c40[0xa8]; // 0xc40
public:
	// MNetworkEnable
	int32_t m_nNumStacks; // 0xce8	
};


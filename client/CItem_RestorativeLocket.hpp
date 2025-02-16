#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd68
// Has VTable
// 
// MNetworkVarNames "int m_nNumStacks"
class CItem_RestorativeLocket : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0cb8[0xa8]; // 0xcb8
public:
	// MNetworkEnable
	int32_t m_nNumStacks; // 0xd60	
};


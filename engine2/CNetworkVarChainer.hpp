#pragma once

#include <cstdint>

struct ChangeAccessorFieldPathIndex_t;
// Registered binary: engine2.dll (project 'entity2')
// Alignment: 8
// Size: 0x28
class CNetworkVarChainer
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20	
};


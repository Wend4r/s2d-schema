#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MNetworkVarNames "uint32 m_bvDisabledHitGroups"
class CHitboxComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x1c]; // 0x8
public:
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; // 0x24	
};


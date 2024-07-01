#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x850
// Has VTable
class C_LaneNode : public CCitadelModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0818[0x30]; // 0x818
public:
	int32_t m_nPlayerTeamEventIndex; // 0x848	
};


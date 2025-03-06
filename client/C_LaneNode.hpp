#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x848
// Has VTable
class C_LaneNode : public CCitadelModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x30]; // 0x810
public:
	int32_t m_nPlayerTeamEventIndex; // 0x840	
};


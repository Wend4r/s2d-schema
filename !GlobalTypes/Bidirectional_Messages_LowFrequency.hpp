#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class Bidirectional_Messages_LowFrequency : uint32_t
{
	bi_RelayInfo = 0x2bc,
	bi_RelayPacket = 0x2bd,
};


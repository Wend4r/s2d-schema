#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ESplitScreenMessageType : uint32_t
{
	MSG_SPLITSCREEN_ADDUSER = 0x0,
	MSG_SPLITSCREEN_REMOVEUSER = 0x1,
};


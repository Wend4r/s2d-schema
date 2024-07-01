#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class SequenceFinishNotifyState_t : uint8_t
{
	eDoNotNotify = 0x0,
	eNotifyWhenFinished = 0x1,
	eNotifyTriggered = 0x2,
};


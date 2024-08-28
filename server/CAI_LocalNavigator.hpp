#pragma once

#include <cstdint>

struct CSimpleSimTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x158
// Has VTable
class CAI_LocalNavigator : public CAI_LocalNavigatorBase
{
public:
	bool m_bLastWasClear; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0xef]; // 0x51
public:
	CSimpleSimTimer m_FullDirectTimer; // 0x140	
};


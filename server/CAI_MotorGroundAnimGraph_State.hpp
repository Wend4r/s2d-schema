#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CAI_MotorGroundAnimGraph_State
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	bool m_bIsActive; // 0x18	
	bool m_bIsUpdating; // 0x19	
private:
	[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
public:
	int32_t m_nTickActivated; // 0x1c	
};


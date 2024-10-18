#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	int32_t m_nBlockedTeamNumber; // 0x794	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};


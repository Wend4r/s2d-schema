#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x720
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x710	
private:
	[[maybe_unused]] uint8_t __pad0711[0x3]; // 0x711
public:
	int32_t m_nBlockedTeamNumber; // 0x714	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};


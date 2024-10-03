#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x760
// Has VTable
class CFuncNavBlocker : public CBaseModelEntity
{
public:
	bool m_bDisabled; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x3]; // 0x751
public:
	int32_t m_nBlockedTeamNumber; // 0x754	
	
	// Datamap fields:
	// void InputBlockNav; // 0x0
	// void InputUnblockNav; // 0x0
};


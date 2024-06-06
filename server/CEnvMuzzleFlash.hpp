#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CEnvMuzzleFlash : public CPointEntity
{
public:
	float m_flScale; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iszParentAttachment; // 0x4c8	
	
	// Datamap fields:
	// void InputFire; // 0x0
};


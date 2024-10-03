#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CEnvMuzzleFlash : public CPointEntity
{
public:
	float m_flScale; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_iszParentAttachment; // 0x4e8	
	
	// Datamap fields:
	// void InputFire; // 0x0
};


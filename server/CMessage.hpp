#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CMessage : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4c0	
	float m_MessageVolume; // 0x4c8	
	int32_t m_MessageAttenuation; // 0x4cc	
	float m_Radius; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_sNoise; // 0x4d8	
	CEntityIOOutput m_OnShowMessage; // 0x4e0	
	
	// Datamap fields:
	// void InputShowMessage; // 0x0
};


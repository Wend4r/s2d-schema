#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CMessage : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4b8	
	float m_MessageVolume; // 0x4c0	
	int32_t m_MessageAttenuation; // 0x4c4	
	float m_Radius; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_sNoise; // 0x4d0	
	CEntityIOOutput m_OnShowMessage; // 0x4d8	
	
	// Datamap fields:
	// void InputShowMessage; // 0x0
};


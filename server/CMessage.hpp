#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CMessage : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszMessage; // 0x4e0	
	float m_MessageVolume; // 0x4e8	
	int32_t m_MessageAttenuation; // 0x4ec	
	float m_Radius; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_sNoise; // 0x4f8	
	CEntityIOOutput m_OnShowMessage; // 0x500	
	
	// Datamap fields:
	// void InputShowMessage; // 0x0
};


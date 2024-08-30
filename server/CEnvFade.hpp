#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkVarNames "Color m_fadeColor"
class CEnvFade : public CLogicalEntity
{
public:
	// MNetworkEnable
	Color m_fadeColor; // 0x4d8	
	float m_Duration; // 0x4dc	
	float m_HoldDuration; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CEntityIOOutput m_OnBeginFade; // 0x4e8	
	
	// Datamap fields:
	// void InputFade; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
// 
// MNetworkVarNames "Color m_fadeColor"
class CEnvFade : public CLogicalEntity
{
public:
	// MNetworkEnable
	Color m_fadeColor; // 0x4b8	
	float m_Duration; // 0x4bc	
	float m_HoldDuration; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CEntityIOOutput m_OnBeginFade; // 0x4c8	
	
	// Datamap fields:
	// void InputFade; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
// 
// MNetworkVarNames "Color m_fadeColor"
class CEnvFade : public CLogicalEntity
{
public:
	// MNetworkEnable
	Color m_fadeColor; // 0x4c0	
	float m_Duration; // 0x4c4	
	float m_HoldDuration; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CEntityIOOutput m_OnBeginFade; // 0x4d0	
	
	// Datamap fields:
	// void InputFade; // 0x0
};


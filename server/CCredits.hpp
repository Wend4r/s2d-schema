#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CCredits : public CPointEntity
{
public:
	CEntityIOOutput m_OnCreditsDone; // 0x4b8	
	bool m_bRolledOutroCredits; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	float m_flLogoLength; // 0x4e4	
	
	// Datamap fields:
	// void InputRollCredits; // 0x0
	// void InputRollOutroCredits; // 0x0
	// void InputShowLogo; // 0x0
	// float InputSetLogoLength; // 0x0
};


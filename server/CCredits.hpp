#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CCredits : public CPointEntity
{
public:
	CEntityIOOutput m_OnCreditsDone; // 0x4c0	
	bool m_bRolledOutroCredits; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
public:
	float m_flLogoLength; // 0x4ec	
	
	// Datamap fields:
	// void InputRollCredits; // 0x0
	// void InputRollOutroCredits; // 0x0
	// void InputShowLogo; // 0x0
	// float InputSetLogoLength; // 0x0
};


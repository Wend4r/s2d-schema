#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CCredits : public CPointEntity
{
public:
	CEntityIOOutput m_OnCreditsDone; // 0x4e0	
	bool m_bRolledOutroCredits; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	float m_flLogoLength; // 0x50c	
	
	// Datamap fields:
	// void InputRollCredits; // 0x0
	// void InputRollOutroCredits; // 0x0
	// void InputShowLogo; // 0x0
	// float InputSetLogoLength; // 0x0
};


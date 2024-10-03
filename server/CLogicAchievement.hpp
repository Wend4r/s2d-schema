#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CLogicAchievement : public CLogicalEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CUtlSymbolLarge m_iszAchievementEventID; // 0x4e8	
	CEntityIOOutput m_OnFired; // 0x4f0	
	
	// Datamap fields:
	// void InputFireEvent; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
};


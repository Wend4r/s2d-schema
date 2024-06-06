#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d8
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4c0	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x540	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad055c[0x4]; // 0x55c
public:
	CEntityIOOutput m_OnAllTrue; // 0x560	
	CEntityIOOutput m_OnAllFalse; // 0x588	
	CEntityIOOutput m_OnMixed; // 0x5b0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};


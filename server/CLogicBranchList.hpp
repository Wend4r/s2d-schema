#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4e0	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x560	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x578	
private:
	[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
public:
	CEntityIOOutput m_OnAllTrue; // 0x580	
	CEntityIOOutput m_OnAllFalse; // 0x5a8	
	CEntityIOOutput m_OnMixed; // 0x5d0	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};


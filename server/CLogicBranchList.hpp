#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4b8	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x538	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	CEntityIOOutput m_OnAllTrue; // 0x558	
	CEntityIOOutput m_OnAllFalse; // 0x580	
	CEntityIOOutput m_OnMixed; // 0x5a8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};


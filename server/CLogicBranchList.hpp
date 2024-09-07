#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
class CLogicBranchList : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4d8	
	CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // 0x558	
	CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
public:
	CEntityIOOutput m_OnAllTrue; // 0x578	
	CEntityIOOutput m_OnAllFalse; // 0x5a0	
	CEntityIOOutput m_OnMixed; // 0x5c8	
	
	// Datamap fields:
	// void InputTest; // 0x0
	// void Input_OnLogicBranchChanged; // 0x0
	// void Input_OnLogicBranchRemoved; // 0x0
};


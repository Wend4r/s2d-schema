#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d8
// Has VTable
class CNPCMaker : public CBaseNPCMaker
{
public:
	CUtlSymbolLarge m_iszNPCSubClass; // 0x5b0	
	CUtlSymbolLarge m_iszSquadName; // 0x5b8	
	CUtlSymbolLarge m_iszHintGroup; // 0x5c0	
	CUtlSymbolLarge m_RelationshipString; // 0x5c8	
	CUtlSymbolLarge m_ChildTargetName; // 0x5d0	
};


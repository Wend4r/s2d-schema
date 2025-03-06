#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
class CNPCMaker : public CBaseNPCMaker
{
public:
	CUtlSymbolLarge m_iszNPCSubClass; // 0x5e8	
	CUtlSymbolLarge m_iszSquadName; // 0x5f0	
	CUtlSymbolLarge m_iszHintGroup; // 0x5f8	
	CUtlSymbolLarge m_RelationshipString; // 0x600	
	CUtlSymbolLarge m_ChildTargetName; // 0x608	
};


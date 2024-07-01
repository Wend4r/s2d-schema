#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CUtlSymbolLarge m_iFilterName; // 0x4c0	
	CHandle< CBaseFilter > m_hFilter; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04cc[0x4]; // 0x4cc
public:
	CUtlSymbolLarge m_iRefName; // 0x4d0	
	CHandle< CBaseEntity > m_hReference; // 0x4d8	
	EntFinderMethod_t m_FindMethod; // 0x4dc	
	CEntityIOOutput m_OnFoundEntity; // 0x4e0	
	
	// Datamap fields:
	// void InputFindEntity; // 0x0
};


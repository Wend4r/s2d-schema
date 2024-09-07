#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CUtlSymbolLarge m_iFilterName; // 0x4e0	
	CHandle< CBaseFilter > m_hFilter; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_iRefName; // 0x4f0	
	CHandle< CBaseEntity > m_hReference; // 0x4f8	
	EntFinderMethod_t m_FindMethod; // 0x4fc	
	CEntityIOOutput m_OnFoundEntity; // 0x500	
	
	// Datamap fields:
	// void InputFindEntity; // 0x0
};


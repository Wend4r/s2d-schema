#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_iFilterName; // 0x4c8	
	CHandle< CBaseFilter > m_hFilter; // 0x4d0	
private:
	[[maybe_unused]] uint8_t __pad04d4[0x4]; // 0x4d4
public:
	CUtlSymbolLarge m_iRefName; // 0x4d8	
	CHandle< CBaseEntity > m_hReference; // 0x4e0	
	EntFinderMethod_t m_FindMethod; // 0x4e4	
	CEntityIOOutput m_OnFoundEntity; // 0x4e8	
	
	// Datamap fields:
	// void InputFindEntity; // 0x0
};


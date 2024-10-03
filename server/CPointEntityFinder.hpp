#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPointEntityFinder : public CBaseEntity
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
public:
	CUtlSymbolLarge m_iFilterName; // 0x4e8	
	CHandle< CBaseFilter > m_hFilter; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
public:
	CUtlSymbolLarge m_iRefName; // 0x4f8	
	CHandle< CBaseEntity > m_hReference; // 0x500	
	EntFinderMethod_t m_FindMethod; // 0x504	
	CEntityIOOutput m_OnFoundEntity; // 0x508	
	
	// Datamap fields:
	// void InputFindEntity; // 0x0
};


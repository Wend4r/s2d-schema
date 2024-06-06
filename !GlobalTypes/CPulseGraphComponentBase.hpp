#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
class CPulseGraphComponentBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CHandle< CBaseEntity > m_hOwner; // 0x8	
	bool m_bActivated; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x10	
	CUtlSymbolLarge m_sNameFixupParent; // 0x18	
	CUtlSymbolLarge m_sNameFixupLocal; // 0x20	
	
	// Datamap fields:
	// void CPulseGraphComponentBaseCallPulse_OnThink; // 0x0
};


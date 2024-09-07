#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CLogicLineToEntity : public CLogicalEntity
{
public:
	CEntityOutputTemplate< Vector > m_Line; // 0x4d8	
	CUtlSymbolLarge m_SourceName; // 0x500	
	CHandle< CBaseEntity > m_StartEntity; // 0x508	
	CHandle< CBaseEntity > m_EndEntity; // 0x50c	
};


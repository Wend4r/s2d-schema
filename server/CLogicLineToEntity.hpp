#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CLogicLineToEntity : public CLogicalEntity
{
public:
	CEntityOutputTemplate< Vector > m_Line; // 0x4b8	
	CUtlSymbolLarge m_SourceName; // 0x4e0	
	CHandle< CBaseEntity > m_StartEntity; // 0x4e8	
	CHandle< CBaseEntity > m_EndEntity; // 0x4ec	
};


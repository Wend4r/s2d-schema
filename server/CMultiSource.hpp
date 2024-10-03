#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x618
// Has VTable
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4e0	
	int32_t m_rgTriggered[32]; // 0x560	
	CEntityIOOutput m_OnTrigger; // 0x5e0	
	int32_t m_iTotal; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	CUtlSymbolLarge m_globalstate; // 0x610	
	
	// Datamap fields:
	// void CMultiSourceRegister; // 0x0
};


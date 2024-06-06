#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4c0	
	int32_t m_rgTriggered[32]; // 0x540	
	CEntityIOOutput m_OnTrigger; // 0x5c0	
	int32_t m_iTotal; // 0x5e8	
private:
	[[maybe_unused]] uint8_t __pad05ec[0x4]; // 0x5ec
public:
	CUtlSymbolLarge m_globalstate; // 0x5f0	
	
	// Datamap fields:
	// void CMultiSourceRegister; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
class CMultiSource : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_rgEntities[32]; // 0x4b8	
	int32_t m_rgTriggered[32]; // 0x538	
	CEntityIOOutput m_OnTrigger; // 0x5b8	
	int32_t m_iTotal; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
public:
	CUtlSymbolLarge m_globalstate; // 0x5e8	
	
	// Datamap fields:
	// void CMultiSourceRegister; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4c8	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x4f0	
	CEntityIOOutput m_PlayerDied; // 0x518	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x540	
};


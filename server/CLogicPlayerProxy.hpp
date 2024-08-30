#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4e0	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x508	
	CEntityIOOutput m_PlayerDied; // 0x530	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x558	
};


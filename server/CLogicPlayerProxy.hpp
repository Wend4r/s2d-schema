#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CLogicPlayerProxy : public CLogicalEntity
{
public:
	CHandle< CBaseEntity > m_hPlayer; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04bc[0x4]; // 0x4bc
public:
	CEntityIOOutput m_PlayerHasAmmo; // 0x4c0	
	CEntityIOOutput m_PlayerHasNoAmmo; // 0x4e8	
	CEntityIOOutput m_PlayerDied; // 0x510	
	CEntityOutputTemplate< int32 > m_RequestedPlayerHealth; // 0x538	
};


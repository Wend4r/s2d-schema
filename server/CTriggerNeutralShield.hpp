#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
class CTriggerNeutralShield : public CBaseTrigger
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecPlayers; // 0x918	
	CUtlVector< CHandle< CBaseEntity > > m_vecNeutrals; // 0x930	
};


#pragma once

#include <cstdint>

struct CBaseEntity;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
class CCitadelTeleportTrigger : public CTriggerModifier
{
public:
	CBaseEntity* m_pEntExit; // 0x928	
	CUtlSymbolLarge m_strExitPoint; // 0x930	
	CEntityIOOutput m_OnTeleport; // 0x938	
};


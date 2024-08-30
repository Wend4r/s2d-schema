#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CLogicAutoCitadel : public CBaseEntity
{
public:
	CEntityIOOutput m_OnWaitingForPlayersToJoin; // 0x4d8	
	CEntityIOOutput m_OnPreGameWait; // 0x500	
	CEntityIOOutput m_OnGameInProgress; // 0x528	
};


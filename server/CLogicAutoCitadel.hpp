#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CLogicAutoCitadel : public CBaseEntity
{
public:
	CEntityIOOutput m_OnWaitingForPlayersToJoin; // 0x4b8	
	CEntityIOOutput m_OnPreGameWait; // 0x4e0	
	CEntityIOOutput m_OnGameInProgress; // 0x508	
};


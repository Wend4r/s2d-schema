#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b8
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x718	
	CEntityIOOutput m_OnPlayerOutZone; // 0x740	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x768	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x790	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x798	
	CEntityIOOutput m_OnPlayerOutZone; // 0x7c0	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x7e8	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x810	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};


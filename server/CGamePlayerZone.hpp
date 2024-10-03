#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
class CGamePlayerZone : public CRuleBrushEntity
{
public:
	CEntityIOOutput m_OnPlayerInZone; // 0x758	
	CEntityIOOutput m_OnPlayerOutZone; // 0x780	
	CEntityOutputTemplate< int32 > m_PlayersInCount; // 0x7a8	
	CEntityOutputTemplate< int32 > m_PlayersOutCount; // 0x7d0	
	
	// Datamap fields:
	// void InputCountPlayersInZone; // 0x0
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CCommentaryAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnCommentaryNewGame; // 0x4b8	
	CEntityIOOutput m_OnCommentaryMidGame; // 0x4e0	
	CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x508	
	
	// Datamap fields:
	// void InputMultiplayerSpawned; // 0x0
};


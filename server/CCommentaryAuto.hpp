#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
class CCommentaryAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnCommentaryNewGame; // 0x4e0	
	CEntityIOOutput m_OnCommentaryMidGame; // 0x508	
	CEntityIOOutput m_OnCommentaryMultiplayerSpawn; // 0x530	
	
	// Datamap fields:
	// void InputMultiplayerSpawned; // 0x0
};


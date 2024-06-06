#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x658
// Has VTable
class CLogicAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMapSpawn; // 0x4c0	
	CEntityIOOutput m_OnDemoMapSpawn; // 0x4e8	
	CEntityIOOutput m_OnNewGame; // 0x510	
	CEntityIOOutput m_OnLoadGame; // 0x538	
	CEntityIOOutput m_OnMapTransition; // 0x560	
	CEntityIOOutput m_OnBackgroundMap; // 0x588	
	CEntityIOOutput m_OnMultiNewMap; // 0x5b0	
	CEntityIOOutput m_OnMultiNewRound; // 0x5d8	
	CEntityIOOutput m_OnVREnabled; // 0x600	
	CEntityIOOutput m_OnVRNotEnabled; // 0x628	
	CUtlSymbolLarge m_globalstate; // 0x650	
};


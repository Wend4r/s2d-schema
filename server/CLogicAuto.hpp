#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
class CLogicAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMapSpawn; // 0x4b8	
	CEntityIOOutput m_OnDemoMapSpawn; // 0x4e0	
	CEntityIOOutput m_OnNewGame; // 0x508	
	CEntityIOOutput m_OnLoadGame; // 0x530	
	CEntityIOOutput m_OnMapTransition; // 0x558	
	CEntityIOOutput m_OnBackgroundMap; // 0x580	
	CEntityIOOutput m_OnMultiNewMap; // 0x5a8	
	CEntityIOOutput m_OnMultiNewRound; // 0x5d0	
	CEntityIOOutput m_OnVREnabled; // 0x5f8	
	CEntityIOOutput m_OnVRNotEnabled; // 0x620	
	CUtlSymbolLarge m_globalstate; // 0x648	
};


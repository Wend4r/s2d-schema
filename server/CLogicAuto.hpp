#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
// Has VTable
class CLogicAuto : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMapSpawn; // 0x4d8	
	CEntityIOOutput m_OnDemoMapSpawn; // 0x500	
	CEntityIOOutput m_OnNewGame; // 0x528	
	CEntityIOOutput m_OnLoadGame; // 0x550	
	CEntityIOOutput m_OnMapTransition; // 0x578	
	CEntityIOOutput m_OnBackgroundMap; // 0x5a0	
	CEntityIOOutput m_OnMultiNewMap; // 0x5c8	
	CEntityIOOutput m_OnMultiNewRound; // 0x5f0	
	CEntityIOOutput m_OnVREnabled; // 0x618	
	CEntityIOOutput m_OnVRNotEnabled; // 0x640	
	CUtlSymbolLarge m_globalstate; // 0x668	
};


#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CInfoSpawnGroupLoadUnload : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4c0	
	CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x4e8	
	CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x510	
	CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x538	
	CUtlSymbolLarge m_iszSpawnGroupName; // 0x560	
	CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x568	
	CUtlSymbolLarge m_iszLandmarkName; // 0x570	
	CUtlString m_sFixedSpawnGroupName; // 0x578	
	float m_flTimeoutInterval; // 0x580	
	bool m_bStreamingStarted; // 0x584	
	bool m_bUnloadingStarted; // 0x585	
	
	// Datamap fields:
	// void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
	// void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
	// void InputStartSpawnGroupLoad; // 0x0
	// void InputActivateSpawnGroup; // 0x0
	// void InputStartSpawnGroupUnload; // 0x0
	// CUtlSymbolLarge InputSetSpawnGroup; // 0x0
};


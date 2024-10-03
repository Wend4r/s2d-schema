#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e0
// Has VTable
class CInfoSpawnGroupLoadUnload : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4e0	
	CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x508	
	CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x530	
	CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x558	
	CUtlSymbolLarge m_iszSpawnGroupName; // 0x580	
	CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x588	
	CUtlSymbolLarge m_iszLandmarkName; // 0x590	
	CUtlString m_sFixedSpawnGroupName; // 0x598	
	float m_flTimeoutInterval; // 0x5a0	
	bool m_bStreamingStarted; // 0x5a4	
	bool m_bUnloadingStarted; // 0x5a5	
	
	// Datamap fields:
	// void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
	// void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
	// void InputStartSpawnGroupLoad; // 0x0
	// void InputActivateSpawnGroup; // 0x0
	// void InputStartSpawnGroupUnload; // 0x0
	// CUtlSymbolLarge InputSetSpawnGroup; // 0x0
};


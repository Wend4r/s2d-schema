#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x920	
	CEntityIOOutput m_OnBombPlanted; // 0x948	
	CEntityIOOutput m_OnBombDefused; // 0x970	
	bool m_bIsBombSiteB; // 0x998	
	bool m_bIsHeistBombTarget; // 0x999	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x99a	
private:
	[[maybe_unused]] uint8_t __pad099b[0x5]; // 0x99b
public:
	CUtlSymbolLarge m_szMountTarget; // 0x9a0	
	CHandle< CBaseEntity > m_hInstructorHint; // 0x9a8	
	int32_t m_nBombSiteDesignation; // 0x9ac	
	
	// Datamap fields:
	// void CBombTargetCBombTargetShim::Touch; // 0x0
	// void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
	// void OnBombExplode; // 0x0
	// void OnBombPlanted; // 0x0
	// void OnBombDefused; // 0x0
};


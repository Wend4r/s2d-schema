#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x8e0	
	CEntityIOOutput m_OnBombPlanted; // 0x908	
	CEntityIOOutput m_OnBombDefused; // 0x930	
	bool m_bIsBombSiteB; // 0x958	
	bool m_bIsHeistBombTarget; // 0x959	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x95a	
private:
	[[maybe_unused]] uint8_t __pad095b[0x5]; // 0x95b
public:
	CUtlSymbolLarge m_szMountTarget; // 0x960	
	CHandle< CBaseEntity > m_hInstructorHint; // 0x968	
	int32_t m_nBombSiteDesignation; // 0x96c	
	
	// Datamap fields:
	// void CBombTargetCBombTargetShim::Touch; // 0x0
	// void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
	// void OnBombExplode; // 0x0
	// void OnBombPlanted; // 0x0
	// void OnBombDefused; // 0x0
};


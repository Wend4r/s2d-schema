#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9f0
// Has VTable
// 
// MNetworkVarNames "bool m_bBombPlantedHere"
class CBombTarget : public CBaseTrigger
{
public:
	CEntityIOOutput m_OnBombExplode; // 0x960	
	CEntityIOOutput m_OnBombPlanted; // 0x988	
	CEntityIOOutput m_OnBombDefused; // 0x9b0	
	bool m_bIsBombSiteB; // 0x9d8	
	bool m_bIsHeistBombTarget; // 0x9d9	
	// MNetworkEnable
	bool m_bBombPlantedHere; // 0x9da	
private:
	[[maybe_unused]] uint8_t __pad09db[0x5]; // 0x9db
public:
	CUtlSymbolLarge m_szMountTarget; // 0x9e0	
	CHandle< CBaseEntity > m_hInstructorHint; // 0x9e8	
	int32_t m_nBombSiteDesignation; // 0x9ec	
	
	// Datamap fields:
	// void CBombTargetCBombTargetShim::Touch; // 0x0
	// void CBombTargetCBombTargetShim::BombTargetUse; // 0x0
	// void OnBombExplode; // 0x0
	// void OnBombPlanted; // 0x0
	// void OnBombDefused; // 0x0
};


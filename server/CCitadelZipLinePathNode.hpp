#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CCitadelZipLinePathNode : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	bool m_bCornerNode; // 0x4c0	
	bool m_bDisableZippingToByPlayers; // 0x4c1	
	bool m_bEnabled; // 0x4c2	
	bool m_bCapturable; // 0x4c3	
private:
	[[maybe_unused]] uint8_t __pad04c4[0x4]; // 0x4c4
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x4c8	
	CUtlSymbolLarge m_strGuardBossName2; // 0x4d0	
	CUtlSymbolLarge m_strGuardBossName3; // 0x4d8	
	
	// Datamap fields:
	// void m_pNode; // 0x4e0
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CCitadelZipLinePathNode : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x18]; // 0x4e0
public:
	bool m_bCornerNode; // 0x4f8	
	bool m_bDisableZippingToByPlayers; // 0x4f9	
	bool m_bEnabled; // 0x4fa	
	bool m_bCapturable; // 0x4fb	
	bool m_bAlwaysUsable; // 0x4fc	
	bool m_bOneWay; // 0x4fd	
private:
	[[maybe_unused]] uint8_t __pad04fe[0x2]; // 0x4fe
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x500	
	CUtlSymbolLarge m_strGuardBossName2; // 0x508	
	CUtlSymbolLarge m_strGuardBossName3; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0518[0x4]; // 0x518
public:
	bool m_bUseForMinimapDrawing; // 0x51c	
	
	// Datamap fields:
	// void m_pNode; // 0x518
};


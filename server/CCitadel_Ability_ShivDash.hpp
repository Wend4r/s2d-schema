#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDashDirection"
// MNetworkVarNames "bool m_bIsDashing"
// MNetworkVarNames "bool m_bStartedInAir"
class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStartPosition; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xab4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xac0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xac1	
private:
	[[maybe_unused]] uint8_t __pad0ac2[0x6]; // 0xac2
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xac8	
	Vector m_vecLastPosition; // 0xae0	
	int32_t m_nReductionsLeft; // 0xaec	
private:
	[[maybe_unused]] uint8_t __pad0af0[0x1f8]; // 0xaf0
public:
	GameTime_t m_flStuckTime; // 0xce8	
};


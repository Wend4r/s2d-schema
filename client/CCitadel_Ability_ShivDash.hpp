#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
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
	Vector m_vStartPosition; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xc69	
private:
	[[maybe_unused]] uint8_t __pad0c6a[0x6]; // 0xc6a
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xc70	
	Vector m_vecLastPosition; // 0xc88	
	int32_t m_nReductionsLeft; // 0xc94	
private:
	[[maybe_unused]] uint8_t __pad0c98[0x230]; // 0xc98
public:
	GameTime_t m_flStuckTime; // 0xec8	
};


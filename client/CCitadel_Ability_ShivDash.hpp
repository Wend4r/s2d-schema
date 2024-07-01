#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
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
	Vector m_vStartPosition; // 0xc28	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xc34	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xc41	
private:
	[[maybe_unused]] uint8_t __pad0c42[0x6]; // 0xc42
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xc48	
	Vector m_vecLastPosition; // 0xc60	
	int32_t m_nReductionsLeft; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c70[0x1f8]; // 0xc70
public:
	GameTime_t m_flStuckTime; // 0xe68	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe40
// Has VTable
// 
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDashDirection"
// MNetworkVarNames "bool m_bIsDashing"
// MNetworkVarNames "bool m_bStartedInAir"
class CCitadel_Ability_NanoDash : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPosition; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vDashDirection; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bIsDashing; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bStartedInAir; // 0xb19	
private:
	[[maybe_unused]] uint8_t __pad0b1a[0x6]; // 0xb1a
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xb20	
	Vector m_vecLastPosition; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b44[0x2dc]; // 0xb44
public:
	GameTime_t m_flStuckTime; // 0xe20	
};


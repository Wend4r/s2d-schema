#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
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
	Vector m_vStartPosition; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xae4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xaf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xaf1	
private:
	[[maybe_unused]] uint8_t __pad0af2[0x6]; // 0xaf2
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xaf8	
	Vector m_vecLastPosition; // 0xb10	
	int32_t m_nReductionsLeft; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b20[0x230]; // 0xb20
public:
	GameTime_t m_flStuckTime; // 0xd50	
	CHandle< CPointModifierThinker > m_hEchoThinker; // 0xd54	
	GameTime_t m_EchoStartTime; // 0xd58	
	bool m_bLetEchoPlay; // 0xd5c	
};


#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
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
	Vector m_vStartPosition; // 0xab0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashDirection; // 0xabc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bIsDashing; // 0xac8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bStartedInAir; // 0xac9	
private:
	[[maybe_unused]] uint8_t __pad0aca[0x6]; // 0xaca
public:
	CUtlVector< CEntityIndex > m_vecHitEnemies; // 0xad0	
	Vector m_vecLastPosition; // 0xae8	
	int32_t m_nReductionsLeft; // 0xaf4	
private:
	[[maybe_unused]] uint8_t __pad0af8[0x1f8]; // 0xaf8
public:
	GameTime_t m_flStuckTime; // 0xcf0	
	CHandle< CPointModifierThinker > m_hEchoThinker; // 0xcf4	
	GameTime_t m_EchoStartTime; // 0xcf8	
	bool m_bLetEchoPlay; // 0xcfc	
};


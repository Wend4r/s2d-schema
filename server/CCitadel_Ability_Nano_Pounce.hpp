#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsFriendlyTarget"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "Vector m_vAttackTarget"
// MNetworkVarNames "GameTime_t m_flPounceStartTime"
// MNetworkVarNames "GameTime_t m_flToTargetStartTime"
class CCitadel_Ability_Nano_Pounce : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1f8]; // 0xab0
public:
	// MNetworkEnable
	bool m_bIsFriendlyTarget; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xcac	
	// MNetworkEnable
	Vector m_vAttackTarget; // 0xcb0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flPounceStartTime; // 0xcbc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flToTargetStartTime; // 0xcc0	
};


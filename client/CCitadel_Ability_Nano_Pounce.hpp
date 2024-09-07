#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "bool m_bIsFriendlyTarget"
// MNetworkVarNames "EHANDLE m_hTarget"
// MNetworkVarNames "Vector m_vAttackTarget"
// MNetworkVarNames "GameTime_t m_flPounceStartTime"
// MNetworkVarNames "GameTime_t m_flToTargetStartTime"
class CCitadel_Ability_Nano_Pounce : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
public:
	// MNetworkEnable
	bool m_bIsFriendlyTarget; // 0xe58	
private:
	[[maybe_unused]] uint8_t __pad0e59[0x3]; // 0xe59
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xe5c	
	// MNetworkEnable
	Vector m_vAttackTarget; // 0xe60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flPounceStartTime; // 0xe6c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flToTargetStartTime; // 0xe70	
};


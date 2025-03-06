#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "ECatStatueState_t m_eState"
// MNetworkVarNames "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c51[0x3]; // 0xc51
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hStatue; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c58[0x8]; // 0xc58
public:
	Vector m_vLaunchPosition; // 0xc60	
	QAngle m_qLaunchAngle; // 0xc6c	
};


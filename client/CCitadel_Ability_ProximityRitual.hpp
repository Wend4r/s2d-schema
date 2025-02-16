#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe58
// Has VTable
// 
// MNetworkVarNames "ECatStatueState_t m_eState"
// MNetworkVarNames "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x3]; // 0xca1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< C_BaseEntity > m_hStatue; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x8]; // 0xca8
public:
	Vector m_vLaunchPosition; // 0xcb0	
	QAngle m_qLaunchAngle; // 0xcbc	
};


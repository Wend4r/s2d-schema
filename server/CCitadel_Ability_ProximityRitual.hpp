#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "ECatStatueState_t m_eState"
// MNetworkVarNames "EHANDLE m_hStatue"
class CCitadel_Ability_ProximityRitual : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	ECatStatueState_t m_eState; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CHandle< CBaseEntity > m_hStatue; // 0xb04	
	GameTime_t m_tCatRecallTime; // 0xb08	
	int32_t m_iCatRecallHealth; // 0xb0c	
	Vector m_vLaunchPosition; // 0xb10	
	QAngle m_qLaunchAngle; // 0xb1c	
};


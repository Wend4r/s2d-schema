#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe58
// Has VTable
// 
// MNetworkVarNames "float m_flDashAngle"
// MNetworkVarNames "int m_nLastGroundDashTick"
// MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
// MNetworkVarNames "GameTime_t m_flAirDashCastTime"
// MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
// MNetworkVarNames "int8 m_nConsecutiveAirDashes"
// MNetworkVarNames "int8 m_nConsecutiveDownDashes"
// MNetworkVarNames "bool m_bDownAirDash"
class CCitadel_Ability_Dash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flDashAngle; // 0xc60	
	GameTime_t m_GroundDashExecuteTime; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nLastGroundDashTick; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGroundDashCastTime; // 0xc6c	
	bool m_bTagCanActivateGroundDash; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c71[0x7]; // 0xc71
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xc78	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashCastTime; // 0xc90	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashDragStartTime; // 0xc94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirDashes; // 0xc98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveDownDashes; // 0xc99	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDownAirDash; // 0xc9a	
private:
	[[maybe_unused]] uint8_t __pad0c9b[0x1b5]; // 0xc9b
public:
	CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // 0xe50	
};


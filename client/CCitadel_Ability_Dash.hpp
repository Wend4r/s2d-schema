#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
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
	float m_flDashAngle; // 0xc28	
	GameTime_t m_GroundDashExecuteTime; // 0xc2c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nLastGroundDashTick; // 0xc30	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flGroundDashCastTime; // 0xc34	
	bool m_bTagCanActivateGroundDash; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c39[0x7]; // 0xc39
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xc40	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashCastTime; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flAirDashDragStartTime; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveAirDashes; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int8_t m_nConsecutiveDownDashes; // 0xc61	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bDownAirDash; // 0xc62	
private:
	[[maybe_unused]] uint8_t __pad0c63[0x1b5]; // 0xc63
public:
	CHandle< CCitadel_Ability_Jump > m_hJumpAbility; // 0xe18	
};


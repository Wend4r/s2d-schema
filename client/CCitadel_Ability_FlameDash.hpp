#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
// MNetworkVarNames "bool m_bIsSpeedBursting"
class CCitadel_Ability_FlameDash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDashEndTime; // 0xc60	
	// MNetworkEnable
	bool m_bIsSpeedBursting; // 0xc78	
};


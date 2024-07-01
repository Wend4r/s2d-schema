#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
// MNetworkVarNames "bool m_bIsSpeedBursting"
class CCitadel_Ability_FlameDash : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDashEndTime; // 0xc28	
	// MNetworkEnable
	bool m_bIsSpeedBursting; // 0xc40	
};


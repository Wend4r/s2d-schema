#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
// 
// MNetworkVarNames "float m_flVertOffset"
// MNetworkVarNames "float m_flHorizGap"
// MNetworkVarNames "Vector m_vStartPos"
// MNetworkVarNames "Vector m_vTargetPos"
// MNetworkVarNames "QAngle m_angFacing"
// MNetworkVarNames "int m_nMantleTypeIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_Mantle : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flVertOffset; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flHorizGap; // 0xaac	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStartPos; // 0xab0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vTargetPos; // 0xabc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angFacing; // 0xac8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nMantleTypeIndex; // 0xad4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStartTime; // 0xad8	
};


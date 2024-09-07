#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "float m_flVertOffset"
// MNetworkVarNames "float m_flHorizGap"
// MNetworkVarNames "Vector m_vStartPos"
// MNetworkVarNames "Vector m_vTargetPos"
// MNetworkVarNames "QAngle m_angFacing"
// MNetworkVarNames "int m_nMantleTypeIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_Mantle : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flVertOffset; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flHorizGap; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStartPos; // 0xc68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vTargetPos; // 0xc74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	QAngle m_angFacing; // 0xc80	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nMantleTypeIndex; // 0xc8c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flStartTime; // 0xc90	
};


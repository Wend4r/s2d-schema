#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc8
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
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flVertOffset; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flHorizGap; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStartPos; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vTargetPos; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	QAngle m_angFacing; // 0xc70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nMantleTypeIndex; // 0xc7c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xc80	
};


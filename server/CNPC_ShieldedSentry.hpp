#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "float m_flAttackRange"
class CNPC_ShieldedSentry : public CNPC_SimpleAnimatingAI
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc28	
	// MNetworkEnable
	float m_flAttackRange; // 0xc40	
	float m_flAttackCone; // 0xc44	
	float m_flLifeTime; // 0xc48	
	float m_flTrackingSpeed; // 0xc4c	
	float m_flDeployTime; // 0xc50	
	float m_flAttackDelay; // 0xc54	
};


#pragma once

#include <cstdint>

struct CLightComponent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkVarNames "CLightComponent::Storage_t m_CLightComponent"
// MEntityAllowsPortraitWorldSpawn
class C_LightEntity : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CLightComponent"
	// MNetworkAlias "CLightComponent"
	// MNetworkTypeAlias "CLightComponent"
	CLightComponent* m_CLightComponent; // 0x830	
};


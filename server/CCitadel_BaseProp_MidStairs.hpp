#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "EMidStairsLocation_t m_eLocation"
class CCitadel_BaseProp_MidStairs : public CPointEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4e0	
	// MNetworkEnable
	EMidStairsLocation_t m_eLocation; // 0x4f8	
};


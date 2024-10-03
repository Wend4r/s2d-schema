#pragma once

#include <cstdint>

struct CBuoyancyHelper;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "float m_flFluidDensity"
class C_TriggerBuoyancy : public C_BaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xd28	
	// MNetworkEnable
	float m_flFluidDensity; // 0xda8	
};


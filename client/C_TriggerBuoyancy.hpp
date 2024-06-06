#pragma once

#include <cstdint>

struct CBuoyancyHelper;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "float m_flFluidDensity"
class C_TriggerBuoyancy : public C_BaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0xcd0	
	// MNetworkEnable
	float m_flFluidDensity; // 0xcf0	
};


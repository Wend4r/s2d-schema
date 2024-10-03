#pragma once

#include <cstdint>

struct CBuoyancyHelper;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a8
// Has VTable
// 
// MNetworkVarNames "float m_flFluidDensity"
class CTriggerBuoyancy : public CBaseTrigger
{
public:
	CBuoyancyHelper m_BuoyancyHelper; // 0x920	
	// MNetworkEnable
	float m_flFluidDensity; // 0x9a0	
	
	// Datamap fields:
	// float InputSetFluidDensity; // 0x0
};


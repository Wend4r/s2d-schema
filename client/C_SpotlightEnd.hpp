#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x820
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class C_SpotlightEnd : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x810	
	// MNetworkEnable
	float m_Radius; // 0x814	
};


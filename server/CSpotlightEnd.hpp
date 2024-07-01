#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class CSpotlightEnd : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x748	
	// MNetworkEnable
	float m_Radius; // 0x74c	
	Vector m_vSpotlightDir; // 0x750	
	Vector m_vSpotlightOrg; // 0x75c	
};


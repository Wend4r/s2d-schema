#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x788
// Has VTable
// 
// MNetworkVarNames "float32 m_flLightScale"
// MNetworkVarNames "float32 m_Radius"
class CSpotlightEnd : public CBaseModelEntity
{
public:
	// MNetworkEnable
	float m_flLightScale; // 0x768	
	// MNetworkEnable
	float m_Radius; // 0x76c	
	Vector m_vSpotlightDir; // 0x770	
	Vector m_vSpotlightOrg; // 0x77c	
};


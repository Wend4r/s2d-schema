#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x860
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hLocalPortalLink"
// MNetworkVarNames "EHANDLE m_hRemotePortalLink"
// MNetworkVarNames "CUtlString m_brushModelName"
// MNetworkVarNames "float m_flFadeStartDist"
// MNetworkVarNames "float m_flFadeEndDist"
// MNetworkVarNames "float m_flFadeStartAngle"
// MNetworkVarNames "float m_flFadeEndAngle"
// MNetworkVarNames "Color m_fadeToColor"
class C_RenderPortal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLocalPortalLink; // 0x830	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemotePortalLink; // 0x834	
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x838	
	// MNetworkEnable
	float m_flFadeStartDist; // 0x840	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x844	
	// MNetworkEnable
	float m_flFadeStartAngle; // 0x848	
	// MNetworkEnable
	float m_flFadeEndAngle; // 0x84c	
	// MNetworkEnable
	Color m_fadeToColor; // 0x850	
};


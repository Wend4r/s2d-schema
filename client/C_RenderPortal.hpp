#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
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
	CHandle< C_BaseEntity > m_hLocalPortalLink; // 0x810	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemotePortalLink; // 0x814	
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x818	
	// MNetworkEnable
	float m_flFadeStartDist; // 0x820	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x824	
	// MNetworkEnable
	float m_flFadeStartAngle; // 0x828	
	// MNetworkEnable
	float m_flFadeEndAngle; // 0x82c	
	// MNetworkEnable
	Color m_fadeToColor; // 0x830	
};


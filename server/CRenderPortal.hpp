#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x780
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
class CRenderPortal : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_szLocalPortalLink; // 0x748	
	CUtlSymbolLarge m_szRemotePortalLink; // 0x750	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLocalPortalLink; // 0x758	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemotePortalLink; // 0x75c	
	// MNetworkEnable
	CUtlString m_brushModelName; // 0x760	
	// MNetworkEnable
	float m_flFadeStartDist; // 0x768	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x76c	
	// MNetworkEnable
	float m_flFadeStartAngle; // 0x770	
	// MNetworkEnable
	float m_flFadeEndAngle; // 0x774	
	// MNetworkEnable
	Color m_fadeToColor; // 0x778	
};


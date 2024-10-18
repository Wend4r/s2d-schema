#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class CEnvParticleGlow : public CParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xd08	
	// MNetworkEnable
	float m_flRadiusScale; // 0xd0c	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xd10	
	// MNetworkEnable
	Color m_ColorTint; // 0xd14	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xd18	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class C_EnvParticleGlow : public C_ParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xdb8	
	// MNetworkEnable
	float m_flRadiusScale; // 0xdbc	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xdc0	
	// MNetworkEnable
	Color m_ColorTint; // 0xdc4	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xdc8	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};


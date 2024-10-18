#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDepth"
// MNetworkVarNames "uint32 m_nRenderOrder"
// MNetworkVarNames "bool m_bProjectOnWorld"
// MNetworkVarNames "bool m_bProjectOnCharacters"
// MNetworkVarNames "bool m_bProjectOnWater"
// MNetworkVarNames "float m_flDepthSortBias"
class C_EnvDecal : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0xd28	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0xd30	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0xd34	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0xd38	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0xd3c	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0xd40	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0xd41	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0xd42	
private:
	[[maybe_unused]] uint8_t __pad0d43[0x1]; // 0xd43
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0xd44	
};


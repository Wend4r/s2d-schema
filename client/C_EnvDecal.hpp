#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0xcc8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0xcd0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0xcd4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0xcd8	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0xcdc	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0xce0	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0xce1	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0xce2	
private:
	[[maybe_unused]] uint8_t __pad0ce3[0x1]; // 0xce3
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0xce4	
};


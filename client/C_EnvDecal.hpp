#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
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
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x808	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x810	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x814	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x818	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x81c	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x820	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x821	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x822	
private:
	[[maybe_unused]] uint8_t __pad0823[0x1]; // 0x823
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x824	
};


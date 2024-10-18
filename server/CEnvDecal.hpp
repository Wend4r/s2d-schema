#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b0
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
class CEnvDecal : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x790	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x798	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x79c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x7a0	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x7a4	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x7a8	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x7a9	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x7aa	
private:
	[[maybe_unused]] uint8_t __pad07ab[0x1]; // 0x7ab
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x7ac	
};


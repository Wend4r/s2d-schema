#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x730
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
class CEnvDecal : public CBaseModelEntity
{
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // 0x710	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flWidth; // 0x718	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flHeight; // 0x71c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnDecalDimensionsChanged"
	float m_flDepth; // 0x720	
	// MNetworkEnable
	uint32_t m_nRenderOrder; // 0x724	
	// MNetworkEnable
	bool m_bProjectOnWorld; // 0x728	
	// MNetworkEnable
	bool m_bProjectOnCharacters; // 0x729	
	// MNetworkEnable
	bool m_bProjectOnWater; // 0x72a	
private:
	[[maybe_unused]] uint8_t __pad072b[0x1]; // 0x72b
public:
	// MNetworkEnable
	float m_flDepthSortBias; // 0x72c	
};


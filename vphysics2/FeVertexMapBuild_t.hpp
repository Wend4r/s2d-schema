#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct FeVertexMapBuild_t
{
public:
	CUtlString m_VertexMapName; // 0x0	
	uint32_t m_nNameHash; // 0x8	
	Color m_Color; // 0xc	
	float m_flVolumetricSolveStrength; // 0x10	
	int32_t m_nScaleSourceNode; // 0x14	
	CUtlVector< float32 > m_Weights; // 0x18	
};


#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x50
// 
// MGetKV3ClassDefaults
class CRenderGroom
{
public:
	CUtlVector< RenderHairStrandInfo_t > m_hairs; // 0x0	
	CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat; // 0x20	
	int32_t m_nSegmentsPerHairStrand; // 0x28	
	int32_t m_nGuideHairCount; // 0x2c	
	int32_t m_nHairCount; // 0x30	
	int32_t m_nGroomGroupID; // 0x34	
	int32_t m_nAttachBoneIdx; // 0x38	
	int32_t m_nAttachMeshIdx; // 0x3c	
	int32_t m_nAttachMeshDrawCallIdx; // 0x40	
	float m_flSumOfAllHairLengths; // 0x44	
	bool m_bEnableSimulation; // 0x48	
};


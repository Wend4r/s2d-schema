#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x68
// 
// MGetKV3ClassDefaults
class CRenderGroom
{
public:
	CUtlVector< RenderHairStrandInfo_t > m_hairs; // 0x0	
	CUtlVector< uint32 > m_hairPositionOffsets; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0030[0x10]; // 0x30
public:
	CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat; // 0x40	
	int32_t m_nSegmentsPerHairStrand; // 0x48	
	int32_t m_nGuideHairCount; // 0x4c	
	int32_t m_nHairCount; // 0x50	
	int32_t m_nGroomGroupID; // 0x54	
	int32_t m_nAttachBoneIdx; // 0x58	
	int32_t m_nAttachMeshIdx; // 0x5c	
	int32_t m_nAttachMeshDrawCallIdx; // 0x60	
	bool m_bEnableSimulation; // 0x64	
};


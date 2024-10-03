#pragma once

#include <cstdint>

struct CRenderSkeleton;
struct DynamicMeshDeformParams_t;
struct CRenderGroom;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x1c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlLeanVectorFixedGrowable< CSceneObjectData, 1 > m_sceneObjects; // 0x10	
	CUtlLeanVector< CBaseConstraint* > m_constraints; // 0x78	
	CRenderSkeleton m_skeleton; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad00d8[0xd0]; // 0xd8
public:
	// -> m_flTensionCompressScale - 0x1a8
	// -> m_flTensionStretchScale - 0x1ac
	// -> m_bRecomputeSmoothNormalsAfterAnimation - 0x1b0
	// -> m_bComputeDynamicMeshTensionAfterAnimation - 0x1b1
	// -> m_bSmoothNormalsAcrossUvSeams - 0x1b2
	DynamicMeshDeformParams_t m_meshDeformParams; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01b4[0x4]; // 0x1b4
public:
	CRenderGroom* m_pGroomData; // 0x1b8	
};


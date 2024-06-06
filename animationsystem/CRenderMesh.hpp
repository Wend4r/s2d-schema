#pragma once

#include <cstdint>

struct CRenderSkeleton;
struct DynamicMeshDeformParams_t;
struct CRenderGroom;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x1f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CRenderMesh
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVectorFixedGrowable< CSceneObjectData > m_sceneObjects; // 0x10	
	CUtlVector< CBaseConstraint* > m_constraints; // 0xa0	
	CRenderSkeleton m_skeleton; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad0108[0xd8]; // 0x108
public:
	// -> m_flTensionCompressScale - 0x1e0
	// -> m_flTensionStretchScale - 0x1e4
	// -> m_bRecomputeSmoothNormalsAfterAnimation - 0x1e8
	// -> m_bComputeDynamicMeshTensionAfterAnimation - 0x1e9
	DynamicMeshDeformParams_t m_meshDeformParams; // 0x1e0	
private:
	[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
public:
	CRenderGroom* m_pGroomData; // 0x1f0	
};


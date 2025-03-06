#pragma once

#include <cstdint>

struct CRenderSkeleton;
struct DynamicMeshDeformParams_t;
struct CRenderGroom;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0x1c8
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
	[[maybe_unused]] uint8_t __pad00d8[0xb4]; // 0xd8
public:
	bool m_bUseUV2ForCharting; // 0x18c	
	bool m_bEmbeddedMapMesh; // 0x18d	
private:
	[[maybe_unused]] uint8_t __pad018e[0x22]; // 0x18e
public:
	DynamicMeshDeformParams_t m_meshDeformParams; // 0x1b0	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	CRenderGroom* m_pGroomData; // 0x1c0	
};


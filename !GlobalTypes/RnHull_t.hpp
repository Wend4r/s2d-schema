#pragma once

#include <cstdint>

struct AABB_t;
struct CRegionSVM;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0xf8
// 
// MGetKV3ClassDefaults
struct RnHull_t
{
public:
	Vector m_vCentroid; // 0x0	
	float m_flMaxAngularRadius; // 0xc	
	AABB_t m_Bounds; // 0x10	
	Vector m_vOrthographicAreas; // 0x28	
	matrix3x4_t m_MassProperties; // 0x34	
	float m_flVolume; // 0x64	
	float m_flSurfaceArea; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	CUtlVector< RnVertex_t > m_Vertices; // 0x70	
	CUtlVector< Vector > m_VertexPositions; // 0x88	
	CUtlVector< RnHalfEdge_t > m_Edges; // 0xa0	
	CUtlVector< RnFace_t > m_Faces; // 0xb8	
	CUtlVector< RnPlane_t > m_FacePlanes; // 0xd0	
	uint32_t m_nFlags; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
public:
	CRegionSVM* m_pRegionSVM; // 0xf0	
};


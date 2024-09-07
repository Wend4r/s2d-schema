#pragma once

#include <cstdint>

struct PackedAABB_t;
struct CDrawCullingData;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 4
// Size: 0x18
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CMeshletDescriptor
{
public:
	PackedAABB_t m_PackedAABB; // 0x0	
	// -> m_vConeApex - 0x8
	// -> m_ConeAxis[3] - 0x14
	// -> m_ConeCutoff - 0x17
	CDrawCullingData m_CullingData; // 0x8	
};


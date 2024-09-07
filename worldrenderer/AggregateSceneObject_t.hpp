#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x78
// 
// MGetKV3ClassDefaults
struct AggregateSceneObject_t
{
public:
	ObjectTypeFlags_t m_allFlags; // 0x0	
	ObjectTypeFlags_t m_anyFlags; // 0x4	
	int16_t m_nLayer; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
public:
	CUtlVector< AggregateMeshInfo_t > m_aggregateMeshes; // 0x10	
	CUtlVector< AggregateLODSetup_t > m_lodSetups; // 0x28	
	CUtlVector< uint16 > m_visClusterMembership; // 0x40	
	CUtlVector< matrix3x4_t > m_fragmentTransforms; // 0x58	
	CStrongHandle< InfoForResourceTypeCModel > m_renderableModel; // 0x70	
};


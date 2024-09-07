#pragma once

#include <cstdint>

struct WorldBuilderParams_t;
struct BakedLightingInfo_t;
// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0xa8
// 
// MGetKV3ClassDefaults
struct World_t
{
public:
	WorldBuilderParams_t m_builderParams; // 0x0	
	CUtlVector< NodeData_t > m_worldNodes; // 0x48	
	BakedLightingInfo_t m_worldLightingInfo; // 0x60	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // 0x90	
};


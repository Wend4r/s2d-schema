#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
// MPropertyFriendlyName "Find Entity"
// MPropertyDescription "Search for an entity by name. If multiple entities have the same name, only one will be returned."
class CPulseCell_Value_FindEntByName : public CPulseCell_BaseValue
{
public:
	CUtlString m_EntityType; // 0x48	
};


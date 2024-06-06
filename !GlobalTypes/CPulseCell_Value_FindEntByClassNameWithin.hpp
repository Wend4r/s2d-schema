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
// MPropertyFriendlyName "Find Entity by Class Name Within Radius"
// MPropertyDescription "Search for an entity by class name within the radius of a given entity. Can loop given a "start" entity that is used as a cursor."
class CPulseCell_Value_FindEntByClassNameWithin : public CPulseCell_BaseValue
{
public:
	CUtlString m_EntityType; // 0x48	
};


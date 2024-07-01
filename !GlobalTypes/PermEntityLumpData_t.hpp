#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
struct PermEntityLumpData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlString m_name; // 0x8	
	CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_childLumps; // 0x10	
	CUtlLeanVector< EntityKeyValueData_t > m_entityKeyValues; // 0x28	
};


#pragma once

#include <cstdint>

// Registered binary: worldrenderer.dll (project 'worldrenderer')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
struct EntityKeyValueData_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< EntityIOConnectionData_t > m_connections; // 0x8	
	CUtlBinaryBlock m_keyValuesData; // 0x20	
};


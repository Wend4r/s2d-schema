#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x1a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimScriptManager
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlVector< ScriptInfo_t > m_scriptInfo; // 0x10	
};


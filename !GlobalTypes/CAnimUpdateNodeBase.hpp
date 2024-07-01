#pragma once

#include <cstdint>

struct CAnimNodePath;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x58
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	// -> m_path[11] - 0x18
	// -> m_nCount - 0x44
	CAnimNodePath m_nodePath; // 0x18	
	AnimNodeNetworkMode m_networkMode; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CUtlString m_name; // 0x50	
};


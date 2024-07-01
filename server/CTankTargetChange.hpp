#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CTankTargetChange : public CPointEntity
{
public:
	CVariantBase< CVariantDefaultAllocator > m_newTarget; // 0x4b8	
	CUtlSymbolLarge m_newTargetName; // 0x4c8	
};


#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
class CTargetSelectorUpdateNode : public CAnimUpdateNodeBase
{
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0070[0x4]; // 0x70
public:
	CAnimParamHandle m_hPositionParameter; // 0x74	
	CAnimParamHandle m_hFacePositionParameter; // 0x76	
};


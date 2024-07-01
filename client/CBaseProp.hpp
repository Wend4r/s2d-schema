#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xab0
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa70	
private:
	[[maybe_unused]] uint8_t __pad0a71[0x3]; // 0xa71
public:
	int32_t m_iShapeType; // 0xa74	
	bool m_bConformToCollisionBounds; // 0xa78	
private:
	[[maybe_unused]] uint8_t __pad0a79[0x3]; // 0xa79
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xa7c	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


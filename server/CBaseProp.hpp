#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	int32_t m_iShapeType; // 0x8ec	
	bool m_bConformToCollisionBounds; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x3]; // 0x8f1
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x8f4	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


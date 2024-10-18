#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09a9[0x3]; // 0x9a9
public:
	int32_t m_iShapeType; // 0x9ac	
	bool m_bConformToCollisionBounds; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x3]; // 0x9b1
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x9b4	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xad0
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0x3]; // 0xa91
public:
	int32_t m_iShapeType; // 0xa94	
	bool m_bConformToCollisionBounds; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0a99[0x3]; // 0xa99
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xa9c	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


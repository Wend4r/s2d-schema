#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0x958	
private:
	[[maybe_unused]] uint8_t __pad0959[0x3]; // 0x959
public:
	int32_t m_iShapeType; // 0x95c	
	bool m_bConformToCollisionBounds; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0961[0x3]; // 0x961
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0x964	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


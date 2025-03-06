#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb40
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	int32_t m_iShapeType; // 0xb04	
	bool m_bConformToCollisionBounds; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b09[0x3]; // 0xb09
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xb0c	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


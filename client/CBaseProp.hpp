#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
class CBaseProp : public CBaseAnimGraph
{
public:
	bool m_bModelOverrodeBlockLOS; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	int32_t m_iShapeType; // 0xed4	
	bool m_bConformToCollisionBounds; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ed9[0x3]; // 0xed9
public:
	matrix3x4_t m_mPreferredCatchTransform; // 0xedc	
	
	// Datamap fields:
	// void health; // 0x7fffffff
	// CUtlSymbolLarge propdata_override; // 0x7fffffff
};


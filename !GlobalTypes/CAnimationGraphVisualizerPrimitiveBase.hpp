#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x40
// Has VTable
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CAnimationGraphVisualizerPrimitiveBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimationGraphVisualizerPrimitiveType m_Type; // 0x8	
	AnimNodeID m_OwningAnimNodePaths[11]; // 0xc	
	int32_t m_nOwningAnimNodePathCount; // 0x38	
};


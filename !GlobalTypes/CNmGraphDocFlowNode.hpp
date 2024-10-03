#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocFlowNode : public CNmGraphDocNode
{
public:
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t, 4 > m_inputPins; // 0x48	
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t, 1 > m_outputPins; // 0xd0	
};


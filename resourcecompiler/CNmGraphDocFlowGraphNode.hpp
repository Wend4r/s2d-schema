#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0xf0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocFlowGraphNode : public CNmGraphDocNode
{
public:
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t > m_inputPins; // 0x40	
	CUtlLeanVectorFixedGrowable< NmGraphDocPin_t > m_outputPins; // 0xc8	
};


#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ParamSpan
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
public:
	CUtlVector< CAnimGraphDoc_ParamSpanSample > m_samples; // 0x20	
	// MPropertyHideField
	CUtlString m_paramName; // 0x38	
	AnimParamID m_id; // 0x40	
	float m_flStartCycle; // 0x44	
	float m_flEndCycle; // 0x48	
};


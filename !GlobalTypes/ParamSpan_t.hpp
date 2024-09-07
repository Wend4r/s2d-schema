#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct ParamSpan_t
{
public:
	CUtlVector< ParamSpanSample_t > m_samples; // 0x0	
	CAnimParamHandle m_hParam; // 0x18	
	AnimParamType_t m_eParamType; // 0x1a	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	float m_flStartCycle; // 0x1c	
	float m_flEndCycle; // 0x20	
};


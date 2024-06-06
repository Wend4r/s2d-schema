#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_MotionParameter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	CUtlString m_name; // 0x18	
	AnimParamID m_id; // 0x20	
	float m_flMinValue; // 0x24	
	float m_flMaxValue; // 0x28	
	int32_t m_nSamples; // 0x2c	
};


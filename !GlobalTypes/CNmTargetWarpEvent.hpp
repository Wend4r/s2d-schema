#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmTargetWarpEvent : public CNmEvent
{
public:
	NmTargetWarpRule_t m_rule; // 0x18	
	NmTargetWarpAlgorithm_t m_algorithm; // 0x19	
};


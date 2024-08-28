#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RampCPLinearRandom : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "ramp rate min"
	Vector m_vecRateMin; // 0x1cc	
	// MPropertyFriendlyName "ramp rate max"
	Vector m_vecRateMax; // 0x1d8	
};


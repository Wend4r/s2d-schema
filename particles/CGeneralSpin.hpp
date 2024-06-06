#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CGeneralSpin : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "spin rate degrees"
	int32_t m_nSpinRateDegrees; // 0x1b8	
	// MPropertyFriendlyName "spin rate min"
	int32_t m_nSpinRateMinDegrees; // 0x1bc	
private:
	[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
public:
	// MPropertyFriendlyName "spin stop time"
	float m_fSpinRateStopTime; // 0x1c4	
};


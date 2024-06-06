#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_AgeNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1c0	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x2]; // 0x1c2
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1c4	
	// MPropertyFriendlyName "start age minimum"
	float m_flAgeMin; // 0x1c8	
	// MPropertyFriendlyName "start age maximum"
	float m_flAgeMax; // 0x1cc	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1d0	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1d4	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1d8	
};


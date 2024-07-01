#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x208
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_TurbulenceForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "noise scale 0"
	float m_flNoiseCoordScale0; // 0x1c8	
	// MPropertyFriendlyName "noise scale 1"
	float m_flNoiseCoordScale1; // 0x1cc	
	// MPropertyFriendlyName "noise scale 2"
	float m_flNoiseCoordScale2; // 0x1d0	
	// MPropertyFriendlyName "noise scale 3"
	float m_flNoiseCoordScale3; // 0x1d4	
	// MPropertyFriendlyName "noise amount 0"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount0; // 0x1d8	
	// MPropertyFriendlyName "noise amount 1"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount1; // 0x1e4	
	// MPropertyFriendlyName "noise amount 2"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount2; // 0x1f0	
	// MPropertyFriendlyName "noise amount 3"
	// MVectorIsCoordinate
	Vector m_vecNoiseAmount3; // 0x1fc	
};


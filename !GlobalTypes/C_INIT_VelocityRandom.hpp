#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CPerParticleVecInput;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1138
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityRandom : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "random speed min"
	CPerParticleFloatInput m_fSpeedMin; // 0x1c8	
	// MPropertyFriendlyName "random speed max"
	CPerParticleFloatInput m_fSpeedMax; // 0x320	
	// MPropertyFriendlyName "speed in local coordinate system min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x478	
	// MPropertyFriendlyName "speed in local coordinate system max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0xad0	
	// MPropertyFriendlyName "Ignore delta time (RenderTrails)"
	bool m_bIgnoreDT; // 0x1128	
private:
	[[maybe_unused]] uint8_t __pad1129[0x3]; // 0x1129
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x112c	
};


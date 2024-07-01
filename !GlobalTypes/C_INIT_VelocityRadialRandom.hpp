#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x488
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_VelocityRadialRandom : public CParticleFunctionInitializer
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
	// MPropertyFriendlyName "local space scale"
	Vector m_vecLocalCoordinateSystemSpeedScale; // 0x478	
private:
	[[maybe_unused]] uint8_t __pad0484[0x1]; // 0x484
public:
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDelta; // 0x485	
};


#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x478
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MovementMoveAlongSkinnedCPSnapshot : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1b8	
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nSnapshotControlPointNumber; // 0x1bc	
	// MPropertyFriendlyName "set normal"
	bool m_bSetNormal; // 0x1c0	
	// MPropertyFriendlyName "set radius"
	bool m_bSetRadius; // 0x1c1	
private:
	[[maybe_unused]] uint8_t __pad01c2[0x6]; // 0x1c2
public:
	// MPropertyFriendlyName "Interpolation"
	CPerParticleFloatInput m_flInterpolation; // 0x1c8	
	// MPropertyFriendlyName "Snapshot Index T Value"
	CPerParticleFloatInput m_flTValue; // 0x320	
};


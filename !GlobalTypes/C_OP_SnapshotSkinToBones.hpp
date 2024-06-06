#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SnapshotSkinToBones : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "rotate normals"
	bool m_bTransformNormals; // 0x1b8	
	// MPropertyFriendlyName "scale radii"
	bool m_bTransformRadii; // 0x1b9	
private:
	[[maybe_unused]] uint8_t __pad01ba[0x2]; // 0x1ba
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1bc	
	// MPropertyFriendlyName "lifetime fade start"
	float m_flLifeTimeFadeStart; // 0x1c0	
	// MPropertyFriendlyName "lifetime fade end"
	float m_flLifeTimeFadeEnd; // 0x1c4	
	// MPropertyFriendlyName "instant jump threshold"
	float m_flJumpThreshold; // 0x1c8	
	// MPropertyFriendlyName "previous position scale"
	float m_flPrevPosScale; // 0x1cc	
};


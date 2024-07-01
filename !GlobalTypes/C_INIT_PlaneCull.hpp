#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PlaneCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point of plane"
	int32_t m_nControlPoint; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	// MPropertyFriendlyName "cull offset"
	CParticleCollectionFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "flip cull normal"
	bool m_bCullInside; // 0x320	
};


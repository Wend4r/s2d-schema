#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_MaintainEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "count to maintain"
	CParticleCollectionFloatInput m_nParticlesToMaintain; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	float m_flStartTime; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x330	
	// MPropertyFriendlyName "emission rate"
	float m_flEmissionRate; // 0x490	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x494	
	// MPropertyFriendlyName "group emission times for new particles"
	bool m_bEmitInstantaneously; // 0x498	
	// MPropertyFriendlyName "perform final emit on stop"
	bool m_bFinalEmitOnStop; // 0x499	
private:
	[[maybe_unused]] uint8_t __pad049a[0x6]; // 0x49a
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x4a0	
};


#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x318	
	// MPropertyFriendlyName "emission scale from parent particle events"
	float m_flInitFromKilledParentParticles; // 0x470	
	// MPropertyFriendlyName "emission parent particle event type"
	// MPropertySuppressExpr "m_flInitFromKilledParentParticles == 0"
	EventTypeSelection_t m_nEventType; // 0x474	
	// MPropertyFriendlyName "emission scale from parent particle count"
	CParticleCollectionFloatInput m_flParentParticleScale; // 0x478	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x5d0	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5d4	
};


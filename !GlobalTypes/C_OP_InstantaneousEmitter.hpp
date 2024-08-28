#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_InstantaneousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "num to emit"
	// MPropertyAttributeRange "1 1000"
	CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c8	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x328	
	// MPropertyFriendlyName "emission scale from parent particle events"
	float m_flInitFromKilledParentParticles; // 0x488	
	// MPropertyFriendlyName "emission parent particle event type"
	// MPropertySuppressExpr "m_flInitFromKilledParentParticles == 0"
	EventTypeSelection_t m_nEventType; // 0x48c	
	// MPropertyFriendlyName "emission scale from parent particle count"
	CParticleCollectionFloatInput m_flParentParticleScale; // 0x490	
	// MPropertyFriendlyName "maximum emission per frame"
	int32_t m_nMaxEmittedPerFrame; // 0x5f0	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5f4	
};


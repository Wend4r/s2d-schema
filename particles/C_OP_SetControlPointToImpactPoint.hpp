#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3c8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetControlPointToImpactPoint : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "control point to set"
	int32_t m_nCPOut; // 0x1c0	
	// MPropertyFriendlyName "control point to trace from"
	int32_t m_nCPIn; // 0x1c4	
	// MPropertyFriendlyName "trace update rate"
	float m_flUpdateRate; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "max trace length"
	CParticleCollectionFloatInput m_flTraceLength; // 0x1d0	
	// MPropertyFriendlyName "offset start point amount"
	float m_flStartOffset; // 0x328	
	// MPropertyFriendlyName "offset end point amount"
	float m_flOffset; // 0x32c	
	// MPropertyFriendlyName "trace direction override"
	// MVectorIsCoordinate
	Vector m_vecTraceDir; // 0x330	
	// MPropertyFriendlyName "trace collision group"
	char m_CollisionGroupName[128]; // 0x33c	
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x3bc	
	// MPropertyFriendlyName "set to trace endpoint if no collision"
	bool m_bSetToEndpoint; // 0x3c0	
	// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
	bool m_bTraceToClosestSurface; // 0x3c1	
	// MPropertyFriendlyName "include water"
	bool m_bIncludeWater; // 0x3c2	
};


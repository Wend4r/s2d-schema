#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x940
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "control point for fast collision tests"
	int32_t m_nCP; // 0x1b8	
	// MPropertyFriendlyName "control point offset for fast collisions"
	// MVectorIsCoordinate
	Vector m_vecCpOffset; // 0x1bc	
	// MPropertyFriendlyName "collision mode"
	ParticleCollisionMode_t m_nCollisionMode; // 0x1c8	
	// MPropertyFriendlyName "minimum detail collision mode"
	ParticleCollisionMode_t m_nCollisionModeMin; // 0x1cc	
	// MPropertyStartGroup "Collision Options"
	// MPropertyFriendlyName "Trace Set"
	ParticleTraceSet_t m_nTraceSet; // 0x1d0	
	// MPropertyFriendlyName "collision group"
	char m_CollisionGroupName[128]; // 0x1d4	
	// MPropertyFriendlyName "World Only"
	bool m_bWorldOnly; // 0x254	
	// MPropertyFriendlyName "brush only"
	bool m_bBrushOnly; // 0x255	
	// MPropertyFriendlyName "include water"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	bool m_bIncludeWater; // 0x256	
private:
	[[maybe_unused]] uint8_t __pad0257[0x1]; // 0x257
public:
	// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
	// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
	int32_t m_nIgnoreCP; // 0x258	
	// MPropertyFriendlyName "control point movement distance tolerance"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCpMovementTolerance; // 0x25c	
	// MPropertyFriendlyName "plane cache retest rate"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
	float m_flRetestRate; // 0x260	
	// MPropertyFriendlyName "trace accuracy tolerance"
	// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
	float m_flTraceTolerance; // 0x264	
	// MPropertyFriendlyName "Confirm Collision Speed Threshold"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_flCollisionConfirmationSpeed; // 0x268	
	// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
	// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
	float m_nMaxTracesPerFrame; // 0x26c	
	// MPropertyStartGroup "Impact Options"
	// MPropertyFriendlyName "radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x270	
	// MPropertyFriendlyName "amount of bounce"
	CPerParticleFloatInput m_flBounceAmount; // 0x3c8	
	// MPropertyFriendlyName "amount of slide"
	CPerParticleFloatInput m_flSlideAmount; // 0x520	
	// MPropertyFriendlyName "Random Direction scale"
	CPerParticleFloatInput m_flRandomDirScale; // 0x678	
	// MPropertyFriendlyName "Add Decay to Bounce"
	bool m_bDecayBounce; // 0x7d0	
	// MPropertyFriendlyName "kill particle on collision"
	bool m_bKillonContact; // 0x7d1	
private:
	[[maybe_unused]] uint8_t __pad07d2[0x2]; // 0x7d2
public:
	// MPropertyFriendlyName "minimum speed to kill on collision"
	float m_flMinSpeed; // 0x7d4	
	// MPropertyFriendlyName "Set Normal"
	bool m_bSetNormal; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07d9[0x3]; // 0x7d9
public:
	// MPropertyFriendlyName "Stick On Collision Cache Field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x7dc	
	// MPropertyFriendlyName "Speed to stop when sticking"
	CPerParticleFloatInput m_flStopSpeed; // 0x7e0	
	// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickDataField; // 0x938	
	// MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x93c	
};


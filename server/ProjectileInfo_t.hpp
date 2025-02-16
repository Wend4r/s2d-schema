#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3a0
// 
// MGetKV3ClassDefaults
struct ProjectileInfo_t
{
public:
	ProjectileBehaviorFlag_t m_nBehaviors; // 0x0	
	// MPropertyStartGroup "Physics"
	float m_flGravityScale; // 0x4	
	float m_flFriction; // 0x8	
	float m_flElasticity; // 0xc	
	float m_flSpeed; // 0x10	
	float m_flUpSpeed; // 0x14	
	float m_flMaxLinearRange; // 0x18	
	float m_flVerticalAimBias; // 0x1c	
	ProjectileShape_t m_eProjectileShape; // 0x20	
	// MPropertySuppressExpr "m_eProjectileShape != Sphere"
	float m_flTriggerRadius; // 0x24	
	// MPropertySuppressExpr "m_eProjectileShape != Sphere"
	float m_flPhysicsRadius; // 0x28	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	Vector m_vecCapsulePhysicsCenter1; // 0x2c	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	Vector m_vecCapsulePhysicsCenter2; // 0x38	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	float m_flCapsulePhysicsRadius; // 0x44	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	Vector m_vecCapsuleTriggerCenter1; // 0x48	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	Vector m_vecCapsuleTriggerCenter2; // 0x54	
	// MPropertySuppressExpr "m_eProjectileShape != Capsule"
	float m_flCapsuleTriggerRadius; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
public:
	// MPropertyStartGroup "Visuals"
	// MPropertyFriendlyName "Trail Particle"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_particle; // 0x68	
	bool m_bHideWarningParticle; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	// MPropertyFriendlyName "Warning Particle"
	// MPropertySuppressExpr "m_bHideWarningParticle == true"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_warningParticle; // 0x150	
	// MPropertyFriendlyName "Projectile Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_customModel; // 0x230	
	float m_flProjectileModelScale; // 0x310	
private:
	[[maybe_unused]] uint8_t __pad0314[0x4]; // 0x314
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Plays when a projectile hits a valid target - or the world. Not the same as detonating, just colliding."
	CSoundEventName m_HitSound; // 0x318	
	// MPropertyDescription "Plays when a projectile hits a valid target ONLY."
	CSoundEventName m_HitTargetSound; // 0x328	
	// MPropertyDescription "Plays when a projectile hits the world ONLY."
	CSoundEventName m_HitWorldSound; // 0x338	
	// MPropertyDescription "Plays when a projectile detonates. Not all projectiles detonate."
	CSoundEventName m_DetonateSound; // 0x348	
	// MPropertyDescription "Plays while a projectile is alive."
	CSoundEventName m_LoopingSound; // 0x358	
	// MPropertyDescription "Plays a warning sound when a projectile hits a surface, but before it detonates. Plays ONLY if a warning particle is also created."
	CSoundEventName m_WarningSound; // 0x368	
	// MPropertyStartGroup "Tracking"
	float m_flTrackingDampingCoefficient; // 0x378	
	float m_flTrackingDuration; // 0x37c	
	float m_flTrackingStartTime; // 0x380	
	float m_flTrackingEndTime; // 0x384	
	float m_flTrackingStopDuration; // 0x388	
private:
	[[maybe_unused]] uint8_t __pad038c[0x4]; // 0x38c
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_AutoProjectileModifier; // 0x390	
};


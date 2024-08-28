#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b10
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	float m_flJumpFallSpeedMax; // 0x14e8	
	float m_flJumpAirDrag; // 0x14ec	
	float m_flJumpAirSpeedMax; // 0x14f0	
	float m_flJumpSpeed; // 0x14f4	
	float m_flJumpPitch; // 0x14f8	
	float m_flDashSpeed; // 0x14fc	
	float m_flDashCloseEnoughToTarget; // 0x1500	
	float m_flDashLockOntoTargetDist; // 0x1504	
	float m_flVelocityTurnSpringStrength; // 0x1508	
	CRemapFloat m_flAngleToSpeedScale; // 0x150c	
	float m_flBackswingDuration; // 0x151c	
	float m_flAnimToStrikePointTime; // 0x1520	
	float m_flGrappleShotFloatTime; // 0x1524	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1528	
	float m_flGrappleSpeed; // 0x152c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1530	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1540	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1550	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1630	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1710	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x17f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19b0	
	CSoundEventName m_strStartDash; // 0x19c0	
	CSoundEventName m_strStartAttack; // 0x19d0	
	CSoundEventName m_strGrappleHitTarget; // 0x19e0	
	CSoundEventName m_strGrappleHitWorld; // 0x19f0	
	CSoundEventName m_strGrappleHitNothing; // 0x1a00	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a10	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a90	
};


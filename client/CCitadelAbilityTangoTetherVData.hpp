#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityTangoTetherVData : public CitadelAbilityVData
{
public:
	float m_flJumpFallSpeedMax; // 0x14e0	
	float m_flJumpAirDrag; // 0x14e4	
	float m_flJumpAirSpeedMax; // 0x14e8	
	float m_flJumpSpeed; // 0x14ec	
	float m_flJumpPitch; // 0x14f0	
	float m_flDashSpeed; // 0x14f4	
	float m_flDashCloseEnoughToTarget; // 0x14f8	
	float m_flDashLockOntoTargetDist; // 0x14fc	
	float m_flVelocityTurnSpringStrength; // 0x1500	
	CRemapFloat m_flAngleToSpeedScale; // 0x1504	
	float m_flBackswingDuration; // 0x1514	
	float m_flAnimToStrikePointTime; // 0x1518	
	float m_flGrappleShotFloatTime; // 0x151c	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1520	
	float m_flGrappleSpeed; // 0x1524	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_TetherModifier; // 0x1528	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1548	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1708	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x17e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19a8	
	CSoundEventName m_strStartDash; // 0x19b8	
	CSoundEventName m_strStartAttack; // 0x19c8	
	CSoundEventName m_strGrappleHitTarget; // 0x19d8	
	CSoundEventName m_strGrappleHitWorld; // 0x19e8	
	CSoundEventName m_strGrappleHitNothing; // 0x19f8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a08	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a88	
};


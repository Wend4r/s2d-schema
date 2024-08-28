#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b20
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x14f0	
	float m_flJumpAirDrag; // 0x14f4	
	float m_flJumpAirSpeedMax; // 0x14f8	
	// MPropertyStartGroup "+Dash Properties"
	float m_flDashSpeed; // 0x14fc	
	float m_flDashCloseEnoughToTarget; // 0x1500	
	float m_flDashLockOntoTargetDist; // 0x1504	
	float m_flTargetMinSpeedToStopChasing; // 0x1508	
	float m_flVelocityTurnSpringStrength; // 0x150c	
	CRemapFloat m_flAngleToSpeedScale; // 0x1510	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x1520	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x1524	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1528	
	float m_flGrappleSpeed; // 0x152c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1530	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1540	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1550	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1720	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x1800	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19c0	
	CSoundEventName m_strStartDash; // 0x19d0	
	CSoundEventName m_strStartAttack; // 0x19e0	
	CSoundEventName m_strGrappleHitTarget; // 0x19f0	
	CSoundEventName m_strGrappleHitWorld; // 0x1a00	
	CSoundEventName m_strGrappleHitNothing; // 0x1a10	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a20	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1aa0	
};


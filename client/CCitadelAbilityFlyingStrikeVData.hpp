#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b28
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x14f8	
	float m_flJumpAirDrag; // 0x14fc	
	float m_flJumpAirSpeedMax; // 0x1500	
	// MPropertyStartGroup "+Dash Properties"
	float m_flDashSpeed; // 0x1504	
	float m_flDashCloseEnoughToTarget; // 0x1508	
	float m_flDashLockOntoTargetDist; // 0x150c	
	float m_flTargetMinSpeedToStopChasing; // 0x1510	
	float m_flVelocityTurnSpringStrength; // 0x1514	
	CRemapFloat m_flAngleToSpeedScale; // 0x1518	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x1528	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x152c	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1530	
	float m_flGrappleSpeed; // 0x1534	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1538	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1548	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1558	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x1808	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x18e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x19c8	
	CSoundEventName m_strStartDash; // 0x19d8	
	CSoundEventName m_strStartAttack; // 0x19e8	
	CSoundEventName m_strGrappleHitTarget; // 0x19f8	
	CSoundEventName m_strGrappleHitWorld; // 0x1a08	
	CSoundEventName m_strGrappleHitNothing; // 0x1a18	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a28	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1aa8	
};


#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c28
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x1598	
	float m_flJumpAirDrag; // 0x159c	
	float m_flJumpAirSpeedMax; // 0x15a0	
	// MPropertyStartGroup "+Flying to Target Properties"
	// MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
	float m_flOnCancelVerticalSpeedBonus; // 0x15a4	
	float m_flFlyingCloseEnoughToTarget; // 0x15a8	
private:
	[[maybe_unused]] uint8_t __pad15ac[0x4]; // 0x15ac
public:
	CPiecewiseCurve m_curveSpeedScale; // 0x15b0	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x15f0	
	float m_flAnimToStrikeArrivalBias; // 0x15f4	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x15f8	
	float m_flGrappleShotDelayToFlyOnHit; // 0x15fc	
	float m_flGrappleSpeed; // 0x1600	
private:
	[[maybe_unused]] uint8_t __pad1604[0x4]; // 0x1604
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1608	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1618	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1628	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1638	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1718	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x17f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x18d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x19b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1a98	
	CSoundEventName m_strStartFlyingToTarget; // 0x1aa8	
	CSoundEventName m_strStartAttack; // 0x1ab8	
	CSoundEventName m_strGrappleHitTarget; // 0x1ac8	
	CSoundEventName m_strGrappleHitWorld; // 0x1ad8	
	CSoundEventName m_strGrappleHitNothing; // 0x1ae8	
	CSoundEventName m_strGrappleLoop; // 0x1af8	
	CSoundEventName m_strFlyingLoop; // 0x1b08	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1b18	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1ba0	
};


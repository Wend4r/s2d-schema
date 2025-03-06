#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c60
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData
{
public:
	// MPropertyStartGroup "+Cast Properties"
	float m_flJumpFallSpeedMax; // 0x15d0	
	float m_flJumpAirDrag; // 0x15d4	
	float m_flJumpAirSpeedMax; // 0x15d8	
	// MPropertyStartGroup "+Flying to Target Properties"
	// MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
	float m_flOnCancelVerticalSpeedBonus; // 0x15dc	
	float m_flFlyingCloseEnoughToTarget; // 0x15e0	
private:
	[[maybe_unused]] uint8_t __pad15e4[0x4]; // 0x15e4
public:
	CPiecewiseCurve m_curveSpeedScale; // 0x15e8	
	// MPropertyStartGroup "+Attack Properties"
	float m_flAnimToStrikePointTime; // 0x1628	
	float m_flAnimToStrikeArrivalBias; // 0x162c	
	// MPropertyStartGroup "+Grapple Properties"
	float m_flGrappleShotFloatTime; // 0x1630	
	float m_flGrappleShotDelayToFlyOnHit; // 0x1634	
	float m_flGrappleSpeed; // 0x1638	
private:
	[[maybe_unused]] uint8_t __pad163c[0x4]; // 0x163c
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1640	
	CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // 0x1650	
	CEmbeddedSubclass< CBaseModifier > m_WeaponBuffModifier; // 0x1660	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // 0x1910	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // 0x19f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDamageTarget; // 0x1ad0	
	CSoundEventName m_strStartFlyingToTarget; // 0x1ae0	
	CSoundEventName m_strStartAttack; // 0x1af0	
	CSoundEventName m_strGrappleHitTarget; // 0x1b00	
	CSoundEventName m_strGrappleHitWorld; // 0x1b10	
	CSoundEventName m_strGrappleHitNothing; // 0x1b20	
	CSoundEventName m_strGrappleLoop; // 0x1b30	
	CSoundEventName m_strFlyingLoop; // 0x1b40	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1b50	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1bd8	
};


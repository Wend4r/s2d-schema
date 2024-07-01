#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1918
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHoldMelee_VData : public CAbilityMeleeVData
{
public:
	CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // 0x1500	
	float m_flNextAttackOnParry; // 0x1528	
	float m_flParryWindow; // 0x152c	
	float m_flParryStunTime; // 0x1530	
	float m_flParryCooldown; // 0x1534	
	CRemapFloat m_AirMeleeUpScale; // 0x1538	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // 0x1548	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // 0x1708	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x17e8	
	CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1868	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play when starting the hold"
	CSoundEventName m_strHoldBegin; // 0x18e8	
	CSoundEventName m_strSuccessfulParrySound; // 0x18f8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1908	
};


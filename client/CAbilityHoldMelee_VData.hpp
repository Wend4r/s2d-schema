#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a28
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHoldMelee_VData : public CAbilityMeleeVData
{
public:
	CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // 0x15f8	
	float m_flLightMeleeAnimChainTime; // 0x1620	
	float m_flNextAttackOnParry; // 0x1624	
	float m_flParryWindow; // 0x1628	
	float m_flParryStunTime; // 0x162c	
	float m_flParryCooldown; // 0x1630	
	CRemapFloat m_AirMeleeUpScale; // 0x1634	
private:
	[[maybe_unused]] uint8_t __pad1644[0x4]; // 0x1644
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // 0x1648	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // 0x1728	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // 0x1808	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x18e8	
	CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1970	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play when starting the hold"
	CSoundEventName m_strHoldBegin; // 0x19f8	
	CSoundEventName m_strSuccessfulParrySound; // 0x1a08	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ParryVictimModifier; // 0x1a18	
};


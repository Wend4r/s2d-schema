#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityShivBloodRageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ActiveCastParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPurge; // 0x16a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_MaxRageBuff; // 0x16b0	
	// MPropertyStartGroup "+Blood Rage Properties"
	float m_flAirSpeedMax; // 0x16c0	
	float m_flFallSpeedMax; // 0x16c4	
	float m_flAirDrag; // 0x16c8	
	float m_flOnDamageDrainSuppressTime; // 0x16cc	
	float m_flOnFullDrainSuppressTime; // 0x16d0	
};


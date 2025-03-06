#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x18b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCrackshotVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // 0x1788	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1868	
	CEmbeddedSubclass< CCitadelModifier > m_CrackshotImmuneModifier; // 0x1878	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_HeadShotVictimSound; // 0x1888	
	CSoundEventName m_HeadShotConfirmationSound; // 0x1898	
	CSoundEventName m_ReadySound; // 0x18a8	
};


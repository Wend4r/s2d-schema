#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // 0x15d8	
	// MPropertyStartGroup "GamePlay"
	float m_flCancelCooldown; // 0x16b8	
private:
	[[maybe_unused]] uint8_t __pad16bc[0x4]; // 0x16bc
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // 0x17a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // 0x1880	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strLaserStartSound; // 0x1960	
	CSoundEventName m_strLaserEndSound; // 0x1970	
	CSoundEventName m_strLaserLoopSound; // 0x1980	
	CSoundEventName m_strLaserHitSound; // 0x1990	
};


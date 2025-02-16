#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1670	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1750	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x1760	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x1770	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x1780	
	CSoundEventName m_BeamStopSound; // 0x1790	
	CSoundEventName m_BeamPointStartLoopSound; // 0x17a0	
	CSoundEventName m_BeamPointEndLoopSound; // 0x17b0	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x17c0	
};


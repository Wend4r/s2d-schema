#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1720
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x15c0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16a0	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x16c0	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x16d0	
	CSoundEventName m_BeamStopSound; // 0x16e0	
	CSoundEventName m_BeamPointStartLoopSound; // 0x16f0	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1700	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1710	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1808
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x1788	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x17a8	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x17b8	
	CSoundEventName m_BeamStopSound; // 0x17c8	
	CSoundEventName m_BeamPointStartLoopSound; // 0x17d8	
	CSoundEventName m_BeamPointEndLoopSound; // 0x17e8	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x17f8	
};


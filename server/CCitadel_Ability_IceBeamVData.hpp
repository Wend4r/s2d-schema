#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1728
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // 0x16c8	
	// MPropertyStartGroup "Sound"
	CSoundEventName m_BeamStartSound; // 0x16d8	
	CSoundEventName m_BeamStopSound; // 0x16e8	
	CSoundEventName m_BeamPointStartLoopSound; // 0x16f8	
	CSoundEventName m_BeamPointEndLoopSound; // 0x1708	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x1718	
};


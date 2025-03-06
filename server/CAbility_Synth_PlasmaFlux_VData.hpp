#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16b8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCasterLoopingSound; // 0x1798	
	CSoundEventName m_strProjectileExpireSound; // 0x17a8	
	CSoundEventName m_strImpactSound; // 0x17b8	
	CSoundEventName m_strTimerSound; // 0x17c8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x17d8	
};


#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1770
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_PlasmaFlux_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_WeaponDamageBonusModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strCasterLoopingSound; // 0x16c0	
	CSoundEventName m_strProjectileExpireSound; // 0x16d0	
	CSoundEventName m_strImpactSound; // 0x16e0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x16f0	
};


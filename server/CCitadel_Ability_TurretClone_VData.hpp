#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1960
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_TurretClone_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTurretParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwapParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_TurretModel; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTurretLoopSound; // 0x1868	
	CSoundEventName m_strTurretLoopStartSound; // 0x1878	
	CSoundEventName m_strTurretLoopEndSound; // 0x1888	
	CSoundEventName m_strTurretShootSound; // 0x1898	
	CSoundEventName m_strSwapSound; // 0x18a8	
	CSoundEventName m_strSwapCloneSound; // 0x18b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x18c8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x18d8	
};


#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1928
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_TurretClone_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strTurretParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSwapParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_TurretModel; // 0x1750	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strTurretLoopSound; // 0x1830	
	CSoundEventName m_strTurretLoopStartSound; // 0x1840	
	CSoundEventName m_strTurretLoopEndSound; // 0x1850	
	CSoundEventName m_strTurretShootSound; // 0x1860	
	CSoundEventName m_strSwapSound; // 0x1870	
	CSoundEventName m_strSwapCloneSound; // 0x1880	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1890	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x18a0	
};


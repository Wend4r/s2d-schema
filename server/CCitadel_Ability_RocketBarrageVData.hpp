#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_MoveSlowModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x15e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16c8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x16d8	
	// MPropertyStartGroup "+Rocket Barrage Properties"
	float m_flMoveSpeedReductionPct; // 0x1760	
	float m_flHeightTestDistance; // 0x1764	
};


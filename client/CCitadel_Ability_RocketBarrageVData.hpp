#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1688
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BarrageModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_MoveSlowModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1510	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15f0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x1600	
	// MPropertyStartGroup "+Rocket Barrage Properties"
	float m_flMoveSpeedReductionPct; // 0x1680	
	float m_flHeightTestDistance; // 0x1684	
};


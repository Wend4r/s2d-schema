#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a08
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BurrowVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowStartParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowEndParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowInGroundParticle; // 0x1868	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BurrowModifier; // 0x1948	
	CEmbeddedSubclass< CCitadelModifier > m_SpinModifier; // 0x1958	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBurrowEndSound; // 0x1968	
	// MPropertyStartGroup "+Burrow Properties"
	float m_flChannelEndEnemyPopUpForce; // 0x1978	
	float m_flChannelEndEnemyPopUpCylinderHeight; // 0x197c	
	// MPropertyDescription "Spin Camera Controller that matches the modifier for client"
	CitadelCameraOperationsSequence_t m_cameraSpinStart; // 0x1980	
};


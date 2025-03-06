#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ae0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbility_Synth_Pulse_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_EscapeModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EffectParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // 0x1888	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // 0x1968	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExpireSound; // 0x1a48	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceInSatchel; // 0x1a58	
};


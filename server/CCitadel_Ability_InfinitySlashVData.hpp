#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1858
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x15d0	
	float m_flRiseDuration; // 0x15d4	
	float m_flSpeedDecayScale; // 0x15d8	
	float m_flExplodeHoldTime; // 0x15dc	
	float m_flExplosionShakeAmplitude; // 0x15e0	
	float m_flExplosionShakeFrequency; // 0x15e4	
	float m_flExplosionShakeDuration; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15ec[0x4]; // 0x15ec
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x16d0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x17b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1838	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x1848	
};


#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1768
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x14e8	
	float m_flRiseDuration; // 0x14ec	
	float m_flSpeedDecayScale; // 0x14f0	
	float m_flExplodeHoldTime; // 0x14f4	
	float m_flExplosionShakeAmplitude; // 0x14f8	
	float m_flExplosionShakeFrequency; // 0x14fc	
	float m_flExplosionShakeDuration; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1504[0x4]; // 0x1504
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x15e8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x16c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1748	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x1758	
};


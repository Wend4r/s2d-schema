#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1778
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x14f8	
	float m_flRiseDuration; // 0x14fc	
	float m_flSpeedDecayScale; // 0x1500	
	float m_flExplodeHoldTime; // 0x1504	
	float m_flExplosionShakeAmplitude; // 0x1508	
	float m_flExplosionShakeFrequency; // 0x150c	
	float m_flExplosionShakeDuration; // 0x1510	
private:
	[[maybe_unused]] uint8_t __pad1514[0x4]; // 0x1514
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x1518	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x15f8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x16d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1758	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x1768	
};


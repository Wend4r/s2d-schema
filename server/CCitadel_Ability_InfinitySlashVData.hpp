#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1820
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_InfinitySlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flRiseSpeed; // 0x1598	
	float m_flRiseDuration; // 0x159c	
	float m_flSpeedDecayScale; // 0x15a0	
	float m_flExplodeHoldTime; // 0x15a4	
	float m_flExplosionShakeAmplitude; // 0x15a8	
	float m_flExplosionShakeFrequency; // 0x15ac	
	float m_flExplosionShakeDuration; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15b4[0x4]; // 0x15b4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOERangeEffect; // 0x15b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AnimCastEffect; // 0x1698	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1778	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1800	
	CEmbeddedSubclass< CCitadelModifier > m_BuffTimerModifier; // 0x1810	
};


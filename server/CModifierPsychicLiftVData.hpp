#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x928
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x718	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x728	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x738	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x818	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strImpactSound; // 0x8f8	
	// MPropertyStartGroup "Gameplay"
	float m_flRiseTime; // 0x908	
	float m_flRiseAcc; // 0x90c	
	float m_flRiseMaxSpeed; // 0x910	
	float m_flRiseDecayFracStart; // 0x914	
	float m_flRiseDecayFracEnd; // 0x918	
	float m_flSlamAcc; // 0x91c	
	float m_flSlamMaxSpeed; // 0x920	
	float m_flSlamImpactRadius; // 0x924	
};


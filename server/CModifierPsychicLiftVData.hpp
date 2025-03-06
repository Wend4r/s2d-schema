#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x948
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierPsychicLiftVData : public CCitadel_Modifier_StunnedVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x738	
	CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // 0x748	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // 0x758	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x838	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strImpactSound; // 0x918	
	// MPropertyStartGroup "Gameplay"
	float m_flRiseTime; // 0x928	
	float m_flRiseAcc; // 0x92c	
	float m_flRiseMaxSpeed; // 0x930	
	float m_flRiseDecayFracStart; // 0x934	
	float m_flRiseDecayFracEnd; // 0x938	
	float m_flSlamAcc; // 0x93c	
	float m_flSlamMaxSpeed; // 0x940	
	float m_flSlamImpactRadius; // 0x944	
};


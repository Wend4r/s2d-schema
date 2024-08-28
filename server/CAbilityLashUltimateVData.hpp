#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x17a8	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1888	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x1890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x18a0	
	CSoundEventName m_MissSound; // 0x18b0	
	CSoundEventName m_ThrowSound; // 0x18c0	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x18d0	
	float m_flFallSpeedMax; // 0x18d4	
	float m_flAirDrag; // 0x18d8	
	float m_flMaxPitchRangeScale; // 0x18dc	
	float m_flThrowAnimTossPoint; // 0x18e0	
};


#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1aa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x1888	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // 0x1968	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1a48	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x1a50	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x1a60	
	CSoundEventName m_MissSound; // 0x1a70	
	CSoundEventName m_ThrowSound; // 0x1a80	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x1a90	
	float m_flFallSpeedMax; // 0x1a94	
	float m_flAirDrag; // 0x1a98	
	float m_flMaxPitchRangeScale; // 0x1a9c	
	float m_flThrowAnimTossPoint; // 0x1aa0	
};


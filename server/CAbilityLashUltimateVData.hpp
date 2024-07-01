#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x17a0	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1880	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x1888	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x1898	
	CSoundEventName m_MissSound; // 0x18a8	
	CSoundEventName m_ThrowSound; // 0x18b8	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x18c8	
	float m_flFallSpeedMax; // 0x18cc	
	float m_flAirDrag; // 0x18d0	
	float m_flMaxPitchRangeScale; // 0x18d4	
	float m_flThrowAnimTossPoint; // 0x18d8	
};


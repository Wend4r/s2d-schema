#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a70
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashUltimateVData : public CBaseLockonAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x15b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1690	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // 0x1770	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // 0x1850	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // 0x1930	
	// MPropertyStartGroup "Animation"
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1a10	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // 0x1a18	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_GrabSound; // 0x1a28	
	CSoundEventName m_MissSound; // 0x1a38	
	CSoundEventName m_ThrowSound; // 0x1a48	
	// MPropertyStartGroup "+Ultimate Properties"
	float m_flAirSpeedMax; // 0x1a58	
	float m_flFallSpeedMax; // 0x1a5c	
	float m_flAirDrag; // 0x1a60	
	float m_flMaxPitchRangeScale; // 0x1a64	
	float m_flThrowAnimTossPoint; // 0x1a68	
};


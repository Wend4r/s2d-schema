#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1aa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x1590	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1670	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1678	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x1680	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x1760	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1840	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x1920	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x1a00	
	CSoundEventName m_StompEnemyImpactSound; // 0x1a10	
	CSoundEventName m_strFallCollideImpactSound; // 0x1a20	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1a30	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1a40	
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1a50	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1a60	
	float m_flDamageFrustumHalfWidth; // 0x1a64	
	float m_flDamageFrustumAngle; // 0x1a68	
	float m_flDamageWaveSpeed; // 0x1a6c	
	float m_flDamageTraceProbeDamageRadius; // 0x1a70	
	float m_flDamageTraceProbeWorldRadius; // 0x1a74	
	float m_flDamageTraceProbeStepUpHeight; // 0x1a78	
	float m_flDamageTraceProbeStepDownHeight; // 0x1a7c	
	float m_flDamageTraceProbeDropDownRate; // 0x1a80	
	float m_flInitialDamageRadiusInMeters; // 0x1a84	
	int32_t m_nGroundCrackGap; // 0x1a88	
	float m_flGroupLengthTolerance; // 0x1a8c	
	float m_flDamageEffectScaleMin; // 0x1a90	
	float m_flDamageEffectScaleMax; // 0x1a94	
	float m_flTrackAmount; // 0x1a98	
	float m_flCollideRadius; // 0x1a9c	
};


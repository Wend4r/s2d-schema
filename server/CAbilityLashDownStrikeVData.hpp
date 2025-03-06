#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ad8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x15c8	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x16a8	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x1798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1878	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x1958	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x1a38	
	CSoundEventName m_StompEnemyImpactSound; // 0x1a48	
	CSoundEventName m_strFallCollideImpactSound; // 0x1a58	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1a68	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1a78	
	CEmbeddedSubclass< CBaseModifier > m_DragModifier; // 0x1a88	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1a98	
	float m_flDamageFrustumHalfWidth; // 0x1a9c	
	float m_flDamageFrustumAngle; // 0x1aa0	
	float m_flDamageWaveSpeed; // 0x1aa4	
	float m_flDamageTraceProbeDamageRadius; // 0x1aa8	
	float m_flDamageTraceProbeWorldRadius; // 0x1aac	
	float m_flDamageTraceProbeStepUpHeight; // 0x1ab0	
	float m_flDamageTraceProbeStepDownHeight; // 0x1ab4	
	float m_flDamageTraceProbeDropDownRate; // 0x1ab8	
	float m_flInitialDamageRadiusInMeters; // 0x1abc	
	int32_t m_nGroundCrackGap; // 0x1ac0	
	float m_flGroupLengthTolerance; // 0x1ac4	
	float m_flDamageEffectScaleMin; // 0x1ac8	
	float m_flDamageEffectScaleMax; // 0x1acc	
	float m_flTrackAmount; // 0x1ad0	
	float m_flCollideRadius; // 0x1ad4	
};


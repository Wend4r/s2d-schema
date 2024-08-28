#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityLashDownStrikeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // 0x14e8	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x15c8	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strAirCastAnimGraphParam; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // 0x1798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // 0x1878	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_StompExplosionSound; // 0x1958	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // 0x1968	
	CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // 0x1978	
	// MPropertyStartGroup "+Down Strike Params"
	float m_flHeightUILingerTime; // 0x1988	
	float m_flDamageFrustumHalfWidth; // 0x198c	
	float m_flDamageFrustumAngle; // 0x1990	
	float m_flDamageWaveSpeed; // 0x1994	
	float m_flDamageTraceProbeDamageRadius; // 0x1998	
	float m_flDamageTraceProbeWorldRadius; // 0x199c	
	float m_flDamageTraceProbeStepUpHeight; // 0x19a0	
	float m_flDamageTraceProbeStepDownHeight; // 0x19a4	
	float m_flDamageTraceProbeDropDownRate; // 0x19a8	
	float m_flInitialDamageRadiusInMeters; // 0x19ac	
	int32_t m_nGroundCrackGap; // 0x19b0	
	float m_flGroupLengthTolerance; // 0x19b4	
	float m_flDamageEffectScaleMin; // 0x19b8	
	float m_flDamageEffectScaleMax; // 0x19bc	
};


#pragma once

#include <cstdint>

struct GlitchSettings_t;
struct DamageReceivedSounds_t;
struct HealingReceivedSounds_t;
struct DamageIndicatorSounds_t;
struct LaneDesc_t;
struct DOFDesc_t;
struct RejuvinatorParams_t;
struct IdolParams_t;
struct TeleporterParams_t;
struct ObjectivesParams_t;
struct CRemapFloat;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10b8
// 
// MVDataRoot
// MVDataSingleton
// MGetKV3ClassDefaults
struct CitadelGenericData_t
{
public:
	CUtlOrderedMap< EDamageFlashType, DamageFlashSettings_t > m_mapDamageFlash; // 0x0	
	// -> m_flStrength - 0x28
	// -> m_nQuantizeType - 0x2c
	// -> m_flQuantizeScale - 0x30
	// -> m_flQuantizeStrength - 0x34
	// -> m_flFrameRate - 0x38
	// -> m_flSpeed - 0x3c
	// -> m_flJumpStrength - 0x40
	// -> m_flDistortStrength - 0x44
	// -> m_flWhiteNoiseStrength - 0x48
	// -> m_flScanlineStrength - 0x4c
	// -> m_flBreakupStrength - 0x50
	GlitchSettings_t m_GlitchSettings; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlOrderedMap< ECurrencyType, CurrencySound_t > m_CurrencyTypeSounds; // 0x58	
	CUtlOrderedMap< EUISound, CSoundEventName > m_UISounds; // 0x80	
	// -> m_strDamageReceiveDefault - 0xa8
	// -> m_strDamageReceiveNPC - 0xb8
	// -> m_strDamageReceiveDOT - 0xc8
	// -> m_strDamageReceiveMeleeNPC - 0xd8
	// -> m_strDamageReceiveMelee - 0xe8
	// -> m_strDamageReceiveShield - 0xf8
	DamageReceivedSounds_t m_DamageReceivedSounds; // 0xa8	
	HealingReceivedSounds_t m_HealingReceivedSounds; // 0x108	
	DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x138	
	CSoundEventName m_strExitCombatSound; // 0x198	
	// MPropertyStartGroup "Particles and Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShoppingEffect; // 0x1a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MinimapZiplinesParticle; // 0x288	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KillStreakFireParticle; // 0x368	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorRespawningParticle; // 0x448	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MidbossIndicatorSpawnedParticle; // 0x528	
	// -> m_strLaneName - 0x608
	// -> m_strCSSClass - 0x610
	// -> m_Color - 0x618
	// -> m_MinimapZiplineColorOverride - 0x61c
	// -> m_Color4Lanes - 0x620
	LaneDesc_t m_LaneInfo[6]; // 0x608	
	// -> m_strLaneName - 0x6c8
	// -> m_strCSSClass - 0x6d0
	// -> m_Color - 0x6d8
	// -> m_MinimapZiplineColorOverride - 0x6dc
	// -> m_Color4Lanes - 0x6e0
	LaneDesc_t m_NoLaneZip; // 0x6c8	
	Color m_MinimapTeamRebelsColor; // 0x6e8	
	Color m_MinimapTeamCombineColor; // 0x6ec	
	// -> m_strSkillTierName - 0x6f0
	// -> m_NetWorth - 0x6f8
	// -> m_DamageTaken - 0x6fc
	// -> m_BossDamage - 0x700
	// -> m_PlayerDamage - 0x704
	// -> m_LastHits - 0x708
	// -> m_OrbsSecured - 0x70c
	// -> m_OrbsDenied - 0x710
	// -> m_AbilitiesUpgraded - 0x714
	// -> m_ModsPurchased - 0x718
	NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x6f0	
	int32_t m_nItemPricePerTier[5]; // 0x7b0	
	float m_flLanePhaseGoldShareFrac[6]; // 0x7c4	
	float m_flPostLanePhaseGoldShareFrac[6]; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07f4[0x4]; // 0x7f4
public:
	CUtlVector< CSubclassName< 4 > > m_HeroTestingTargetDummyUpgrades; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad0810[0x58]; // 0x810
public:
	DOFDesc_t m_DefaultDOF; // 0x868	
	RejuvinatorParams_t m_RejuvParams; // 0x878	
	IdolParams_t m_IdolParams; // 0x8d0	
	TeleporterParams_t m_TeleporterParams; // 0xe28	
	// -> m_GoldPerOrb - 0x1018
	// -> m_nTier1GoldKill - 0x101c
	// -> m_nTier1GoldOrbs - 0x1020
	// -> m_nTier2GoldKill - 0x1024
	// -> m_nTier2GoldOrbs - 0x1028
	// -> m_nBaseGuardiansGoldKill - 0x102c
	// -> m_nBaseGuardiansGoldOrbs - 0x1030
	// -> m_nShrinesGoldKill - 0x1034
	// -> m_nShrinesGoldOrbs - 0x1038
	// -> m_nPatronPhase1GoldKill - 0x103c
	// -> m_nPatronPhase1GoldOrbs - 0x1040
	ObjectivesParams_t m_ObjectiveParams; // 0x1018	
private:
	[[maybe_unused]] uint8_t __pad1044[0x4]; // 0x1044
public:
	CUtlOrderedMap< EStatsType, CUtlString > m_mapStatTypeImages; // 0x1048	
	// MPropertyDescription "Remap camera angle delta to aim spring strength"
	CRemapFloat m_AimSpringStrength; // 0x1070	
	// MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
	CRemapFloat m_TargetingSpringStrength; // 0x1080	
	CUtlOrderedMap< EAbilityResourceType, HeroAbilityResourceDef_t > m_mapResourceTypes; // 0x1090	
};


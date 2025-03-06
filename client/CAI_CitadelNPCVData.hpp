#pragma once

#include <cstdint>

struct CCitadelWeaponInfo;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
// MPropertySuppressBaseClassField
class CAI_CitadelNPCVData : public CAI_BaseNPCVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmGraphDefinition > > m_sAG2VariationName; // 0x388	
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x468	
	float m_flSightRangePlayers; // 0x490	
	float m_flSightRangeNPCs; // 0x494	
	CGlobalSymbol m_MeleeAnimName; // 0x498	
	float m_flMeleeAttemptRange; // 0x4a0	
	float m_flMeleeHitRange; // 0x4a4	
	CUtlVector< float32 > m_MeleeAttackPoints; // 0x4a8	
	float m_flMaxHealthBarDrawDistance; // 0x4c0	
	// MPropertyStartGroup "Movement"
	float m_flWalkSpeed; // 0x4c4	
	float m_flRunSpeed; // 0x4c8	
	float m_flTurnRate; // 0x4cc	
	float m_flAcceleration; // 0x4d0	
	float m_flStepHeight; // 0x4d4	
	int8_t m_navHull; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BeamStartSound; // 0x4e0	
	CSoundEventName m_BeamStopSound; // 0x4f0	
	CSoundEventName m_BeamPointStartLoopSound; // 0x500	
	CSoundEventName m_BeamPointEndLoopSound; // 0x510	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x520	
	CSoundEventName m_strAmbientLoopSound; // 0x530	
	CSoundEventName m_DeathSound; // 0x540	
	CSoundEventName m_strLastHitSound; // 0x550	
	bool m_bPlayLastHitSound; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x7]; // 0x561
public:
	CSoundEventName m_MeleeHitSound; // 0x568	
	CSoundEventName m_MeleeHitPlayerSound; // 0x578	
	// MPropertyStartGroup "Visuals"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sDefaultMaterialGroupName; // 0x588	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sEnemyMaterialGroupName; // 0x590	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam1MaterialGroupName; // 0x598	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam2MaterialGroupName; // 0x5a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x5a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // 0x688	
	float m_flModelScale; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad076c[0x4]; // 0x76c
public:
	// MPropertyDescription "Particle to play instead of doing a ragdoll"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // 0x770	
	// MPropertyStartGroup "Health Bar"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // 0x850	
	CUtlString m_sHealthBarAttachment; // 0x930	
	Color m_HealthBarColorFriend; // 0x938	
	Color m_HealthBarColorEnemy; // 0x93c	
	Color m_HealthBarColorTeam1; // 0x940	
	Color m_HealthBarColorTeam2; // 0x944	
	Color m_HealthBarColorTeamNeutral; // 0x948	
	// MPropertyStartGroup "Misc"
	float m_flHealthBarOffset; // 0x94c	
	// MPropertyDescription "When true, spawns breakables defined in the model"
	bool m_bSpawnBreakablesOnDeath; // 0x950	
private:
	[[maybe_unused]] uint8_t __pad0951[0x3]; // 0x951
public:
	// MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
	float m_flBreakableForceScale; // 0x954	
	// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
	float m_flPhysicsImpulseMultiplier; // 0x958	
	// MPropertyStartGroup "Beam Weapon"
	float m_flBeamWeaponWidth; // 0x95c	
	float m_flBeamTurnRate; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad0964[0x4]; // 0x964
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // 0x968	
	CCitadelWeaponInfo m_WeaponInfo; // 0xa48	
};


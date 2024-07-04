#pragma once

#include <cstdint>

struct CCitadelWeaponInfo;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
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
	CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // 0x200	
	float m_flSightRangePlayers; // 0x228	
	float m_flSightRangeNPCs; // 0x22c	
	CUtlString m_MeleeAnimName; // 0x230	
	float m_flMeleeAttemptRange; // 0x238	
	float m_flMeleeHitRange; // 0x23c	
	float m_flMaxHealthBarDrawDistance; // 0x240	
	// MPropertyStartGroup "Movement"
	float m_flWalkSpeed; // 0x244	
	float m_flRunSpeed; // 0x248	
	float m_flTurnRate; // 0x24c	
	float m_flAcceleration; // 0x250	
	float m_flStepHeight; // 0x254	
	int8_t m_navHull; // 0x258	
	bool m_bFaceTargetEvenWhenMoving; // 0x259	
private:
	[[maybe_unused]] uint8_t __pad025a[0x6]; // 0x25a
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BeamStartSound; // 0x260	
	CSoundEventName m_BeamStopSound; // 0x270	
	CSoundEventName m_BeamPointStartLoopSound; // 0x280	
	CSoundEventName m_BeamPointEndLoopSound; // 0x290	
	CSoundEventName m_BeamPointClosestLoopSound; // 0x2a0	
	CSoundEventName m_strAmbientLoopSound; // 0x2b0	
	CSoundEventName m_DeathSound; // 0x2c0	
	CSoundEventName m_strLastHitSound; // 0x2d0	
	bool m_bPlayLastHitSound; // 0x2e0	
private:
	[[maybe_unused]] uint8_t __pad02e1[0x7]; // 0x2e1
public:
	CSoundEventName m_MeleeHitSound; // 0x2e8	
	CSoundEventName m_MeleeHitPlayerSound; // 0x2f8	
	// MPropertyStartGroup "Visuals"
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sDefaultMaterialGroupName; // 0x308	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sEnemyMaterialGroupName; // 0x310	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam1MaterialGroupName; // 0x318	
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_sTeam2MaterialGroupName; // 0x320	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x328	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // 0x408	
	float m_flModelScale; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	// MPropertyDescription "Particle to play instead of doing a ragdoll"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // 0x4f0	
	// MPropertyStartGroup "Health Bar"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // 0x5d0	
	CUtlString m_sHealthBarAttachment; // 0x6b0	
	Color m_HealthBarColorFriend; // 0x6b8	
	Color m_HealthBarColorEnemy; // 0x6bc	
	Color m_HealthBarColorTeam1; // 0x6c0	
	Color m_HealthBarColorTeam2; // 0x6c4	
	Color m_HealthBarColorTeamNeutral; // 0x6c8	
	// MPropertyStartGroup "Misc"
	float m_flHealthBarOffset; // 0x6cc	
	// MPropertyStartGroup "Beam Weapon"
	float m_flBeamWeaponWidth; // 0x6d0	
	float m_flBeamTurnRate; // 0x6d4	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // 0x6d8	
	// MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
	float m_flPhysicsImpulseMultiplier; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CCitadelWeaponInfo m_WeaponInfo; // 0x7c0	
};


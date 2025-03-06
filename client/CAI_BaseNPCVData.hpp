#pragma once

#include <cstdint>

struct CFootstepTableHandle;
struct NPCStatusEffectMap_t;
struct CSkillFloat;
struct CSkillInt;
struct AI_AdditionalMovementSettings;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x388
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_BaseNPCVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	// MPropertyGroupName "Sounds"
	CFootstepTableHandle m_hFootstepSounds; // 0x108	
	// MPropertyFriendlyName "Nav Link Movements"
	// MPropertyDescription "List of the kind of nav links movement this unit is capable of."
	// MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
	CUtlVector< CGlobalSymbol > m_vecNavLinkMovementNames; // 0x110	
	int32_t m_nMaxHealth; // 0x128	
private:
	[[maybe_unused]] uint8_t __pad012c[0x4]; // 0x12c
public:
	CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // 0x130	
	// MPropertyFriendlyName "Status Effects"
	// MPropertyDescription "List of the status effects this NPC cares about"
	NPCStatusEffectMap_t m_statusEffectMap; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
public:
	CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // 0x150	
	// MPropertyStartGroup "Damage"
	CSkillFloat m_flHeadDamageMultiplier; // 0x168	
	CSkillFloat m_flChestDamageMultiplier; // 0x178	
	CSkillFloat m_flStomachDamageMultiplier; // 0x188	
	CSkillFloat m_flArmDamageMultiplier; // 0x198	
	CSkillFloat m_flLegDamageMultiplier; // 0x1a8	
	CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8	
	bool m_bTakesDamage; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
public:
	// MPropertyDescription "Damaged Effect"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamagedEffect; // 0x1d0	
	// MPropertyDescription "Amount of health to grant to a ragdoll before the ragdoll is destroyed."
	int32_t m_nRagdollHealth; // 0x2b0	
	// MPropertyStartGroup "Navigation"
	bool m_bAllowNonZUpMovement; // 0x2b4	
	// MPropertyDescription "If true, this NPC will use a dynamic collision hull that allows it to be pushed by heavy things and affected by constraints."
	bool m_bUseDynamicCollisionHull; // 0x2b5	
	// MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
	bool m_bRequestCapsuleCollision; // 0x2b6	
private:
	[[maybe_unused]] uint8_t __pad02b7[0x1]; // 0x2b7
public:
	// MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
	float m_flCapsuleRadiusOverride; // 0x2b8	
	// MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
	float m_flCapsuleHeightOverride; // 0x2bc	
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "Enabled Shared Actions"
	// MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
	// MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sModelName; literal; e_action_desired_shared )"
	CUtlVector< CGlobalSymbol > m_vecActionDesiredShared; // 0x2c0	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Player Killed NPC Sound"
	CSoundEventName m_sPlayerKilledNpcSound; // 0x2d8	
	// MPropertyStartGroup "Death"
	CGlobalSymbol m_sCustomDeathHandshake; // 0x2e8	
	// MPropertyStartGroup "Movement"
	// MPropertyDescription "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
	bool m_bEnableCodeDrivenAnimgraphMovement; // 0x2f0	
	// MPropertyDescription "If true, the NPC will request strafing if it is supported by the animgraph. Can still be overriden by schedules."
	bool m_bEnableAnimgraphTagDrivenStrafing; // 0x2f1	
private:
	[[maybe_unused]] uint8_t __pad02f2[0x6]; // 0x2f2
public:
	AI_AdditionalMovementSettings m_defaultAdditionalMovementSettings; // 0x2f8	
	float m_flThreatTemperature; // 0x380	
	float m_flFlashpoint; // 0x384	
};


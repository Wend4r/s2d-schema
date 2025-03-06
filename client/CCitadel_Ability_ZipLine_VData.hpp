#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1f90
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
	float m_flZiplineAirDrag; // 0x15c8	
	float m_flMinButtonHoldTimeToActivate; // 0x15cc	
	float m_flCrouchDropSpeedFraction; // 0x15d0	
	float m_flCrouchDropAirDragSuppressDuration; // 0x15d4	
	float m_flDetachDisallowedTime; // 0x15d8	
	float m_flCameraWobbleIntensity; // 0x15dc	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x15e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x17b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x1890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // 0x1970	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x1a50	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1b30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1c10	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1cf0	
	CSoundEventName m_strZipLineLatchedSound; // 0x1d00	
	CSoundEventName m_strZipLineStartSound; // 0x1d10	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1d20	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1d30	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1d40	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1d50	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1d60	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d70	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1df8	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1e80	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1f08	
};


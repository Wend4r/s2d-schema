#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f58
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
	float m_flZiplineAirDrag; // 0x1590	
	float m_flMinButtonHoldTimeToActivate; // 0x1594	
	float m_flCrouchDropSpeedFraction; // 0x1598	
	float m_flCrouchDropAirDragSuppressDuration; // 0x159c	
	float m_flDetachDisallowedTime; // 0x15a0	
	float m_flCameraWobbleIntensity; // 0x15a4	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x15a8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x15b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x1698	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x1778	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x1858	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // 0x1938	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x1a18	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1af8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1bd8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1cb8	
	CSoundEventName m_strZipLineLatchedSound; // 0x1cc8	
	CSoundEventName m_strZipLineStartSound; // 0x1cd8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1ce8	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1cf8	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1d08	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1d18	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1d28	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d38	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1dc0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1e48	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1ed0	
};


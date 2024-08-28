#pragma once

#include <cstdint>

struct DOFDesc_t;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1db0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData
{
public:
	float m_flMinButtonHoldTimeToActivate; // 0x14e8	
	float m_flCrouchDropSpeedFraction; // 0x14ec	
	float m_flCrouchDropAirDragSuppressDuration; // 0x14f0	
	float m_flDetachDisallowedTime; // 0x14f4	
	float m_flCameraWobbleIntensity; // 0x14f8	
	// MPropertyDescription "The DOF settings to apply while riding the zipline."
	DOFDesc_t m_DOFWhileZiplining; // 0x14fc	
private:
	[[maybe_unused]] uint8_t __pad150c[0x4]; // 0x150c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // 0x17b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // 0x1890	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // 0x1970	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // 0x1a50	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strZipLineSummonSound; // 0x1b30	
	CSoundEventName m_strZipLineLatchedSound; // 0x1b40	
	CSoundEventName m_strZipLineStartSound; // 0x1b50	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // 0x1b60	
	CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // 0x1b70	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // 0x1b80	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // 0x1b90	
	CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // 0x1ba0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1bb0	
	CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c30	
	CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1cb0	
	CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1d30	
};


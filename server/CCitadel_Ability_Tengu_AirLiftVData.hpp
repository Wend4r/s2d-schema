#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1868
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tengu_AirLiftVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FlyingModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_GrabModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_HoldBombModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_DroppedBuffModifier; // 0x15f8	
	CEmbeddedSubclass< CCitadelModifier > m_ExplodingAllyModifier; // 0x1608	
	CEmbeddedSubclass< CCitadelModifier > m_AoEModifier; // 0x1618	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialExplodeParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBombEffect; // 0x1708	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strExplodeSound; // 0x17e8	
	// MPropertyStartGroup "Gameplay"
	float m_flAirDrag; // 0x17f8	
	float m_flMaxFallSpeed; // 0x17fc	
	float m_flTargetAirSpeedFast; // 0x1800	
	float m_flTargetAirSpeedBase; // 0x1804	
	float m_flSprintMult; // 0x1808	
	float m_flAcceleration; // 0x180c	
	float m_flDecceleration; // 0x1810	
	float m_flAirSideSpeedPercent; // 0x1814	
	float m_flBoostEndVerticalSpeed; // 0x1818	
	float m_flBoostSpeedUp; // 0x181c	
	float m_flCrouchLaunchReduction; // 0x1820	
	float m_flMinFlyHeight; // 0x1824	
	float m_flMaxFlyHeight; // 0x1828	
	float m_flMaxPitchUp; // 0x182c	
	float m_flMaxPitchDown; // 0x1830	
	float m_flAllyDelayedBoostTime; // 0x1834	
	float m_flChannelingAirDrag; // 0x1838	
	float m_flChannelingMaxFallSpeed; // 0x183c	
	float m_flBombReleaseSpeed; // 0x1840	
	float m_flBombReleasePitch; // 0x1844	
	float m_flBombDropReleaseOffset; // 0x1848	
	float m_flHoldBombOffsetX; // 0x184c	
	float m_flHoldBombOffsetY; // 0x1850	
	float m_flHoldBombOffsetZ; // 0x1854	
	float m_flAnglePitchBias; // 0x1858	
	float m_flTrackAmount; // 0x185c	
	float m_flMoveCollideSpeed; // 0x1860	
};

